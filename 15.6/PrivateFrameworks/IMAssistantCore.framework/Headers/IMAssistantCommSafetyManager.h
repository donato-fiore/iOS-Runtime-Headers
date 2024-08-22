// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSISTANTCOMMSAFETYMANAGER_H
#define IMASSISTANTCOMMSAFETYMANAGER_H

@class IMCommSafetyRequestsManager, IMCommSafetySettingsManager, NSString;
@protocol IMAssistantCommSafetyManager;

#import <Foundation/Foundation.h>


@interface IMAssistantCommSafetyManager : NSObject <IMAssistantCommSafetyManager>



@property (readonly, nonatomic) BOOL checkSensitivePhotos;
@property (readonly, nonatomic) IMCommSafetyRequestsManager *commSafetyRequestsManager; // ivar: _commSafetyRequestsManager
@property (readonly, nonatomic) IMCommSafetySettingsManager *commSafetySettingsManager; // ivar: _commSafetySettingsManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCommSafetyRequestsManager:(id)arg0 commSafetySettingsManager:(id)arg1 ;
-(void)isSensitiveImage:(id)arg0 withChatID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif