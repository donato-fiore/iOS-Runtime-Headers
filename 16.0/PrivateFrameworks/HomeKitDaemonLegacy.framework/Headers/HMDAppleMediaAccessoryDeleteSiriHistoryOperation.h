// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYDELETESIRIHISTORYOPERATION_H
#define HMDAPPLEMEDIAACCESSORYDELETESIRIHISTORYOPERATION_H

@class HMFOperation, NSString, AFSettingsConnection;
@protocol HMFLogging;



@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) AFSettingsConnection *settingsConnection; // ivar: _settingsConnection
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSettingsConnection:(id)arg0 ;
-(void)main;


@end


#endif