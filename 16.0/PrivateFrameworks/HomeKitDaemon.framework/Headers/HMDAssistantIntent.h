// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDASSISTANTINTENT_H
#define HMDASSISTANTINTENT_H

@class NSString, NSArray, INControlHomeIntent;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDAssistantIntent : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *homeKitObjects; // ivar: _homeKitObjects
@property (retain, nonatomic) INControlHomeIntent *intent; // ivar: _intent
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_getObjectsWithUUID;
-(id)initWithIntent:(id)arg0 ;
-(void)_handleActionSetForConfirmation:(id)arg0 message:(id)arg1 ;
-(void)_handleActionSetForExecution:(id)arg0 message:(id)arg1 ;
-(void)_handleIntentRequestMessage:(id)arg0 ;
-(void)performWithGather:(id)arg0 message:(id)arg1 ;


@end


#endif