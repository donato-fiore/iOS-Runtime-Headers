// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDREMOTEBROWSINGCONNECTIONRECORD_H
#define MANAGEDREMOTEBROWSINGCONNECTIONRECORD_H

@class NSManagedObject, NSString, NSDate;



@interface ManagedRemoteBrowsingConnectionRecord : NSManagedObject

@property (nonatomic, copy) NSString *participantIdentifier;
@property (nonatomic, copy) NSDate *timestamp;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif