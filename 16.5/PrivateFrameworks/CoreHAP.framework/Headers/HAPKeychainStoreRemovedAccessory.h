// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPKEYCHAINSTOREREMOVEDACCESSORY_H
#define HAPKEYCHAINSTOREREMOVEDACCESSORY_H

@class HMFObject, NSString, NSDate, NSError;
@protocol HMFLogging;



@interface HAPKeychainStoreRemovedAccessory : HMFObject <HMFLogging>



@property (readonly, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *removeError; // ivar: _removeError
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithName:(id)arg0 creationDate:(id)arg1 ;


@end


#endif