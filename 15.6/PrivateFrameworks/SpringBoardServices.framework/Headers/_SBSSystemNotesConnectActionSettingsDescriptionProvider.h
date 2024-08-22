// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBSSYSTEMNOTESCONNECTACTIONSETTINGSDESCRIPTIONPROVIDER_H
#define _SBSSYSTEMNOTESCONNECTACTIONSETTINGSDESCRIPTIONPROVIDER_H

@class NSString;
@protocol BSSettingDescriptionProvider;

#import <Foundation/Foundation.h>


@interface _SBSSystemNotesConnectActionSettingsDescriptionProvider : NSObject <BSSettingDescriptionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif