// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHMANAGEDHANDLE_H
#define CHMANAGEDHANDLE_H

@class NSManagedObject, NSSet, NSString;


#import "CHHandle.h"

@interface CHManagedHandle : NSManagedObject

@property (readonly, nonatomic) CHHandle *chHandle;
@property (retain, nonatomic) NSSet *localParticipantCalls;
@property (copy, nonatomic) NSString *normalizedValue;
@property (retain, nonatomic) NSSet *remoteParticipantCalls;
@property (nonatomic) short type;
@property (retain, nonatomic) NSString *value;


+(id)fetchRequest;
+(id)managedHandleForHandle:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)managedHandlesForHandles:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)copyWithContext:(id)arg0 ;


@end


#endif