// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYDELETEDOBJECT_H
#define SYDELETEDOBJECT_H

@class NSString;
@protocol SYChange;

#import <Foundation/Foundation.h>


@interface SYDeletedObject : NSObject <SYChange>



@property (readonly, nonatomic) NSInteger changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer; // ivar: _sequencer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *syncId; // ivar: _syncId


-(id)initWithObjectID:(id)arg0 sequencer:(id)arg1 ;
-(id)initWithSyncId:(id)arg0 ;


@end


#endif