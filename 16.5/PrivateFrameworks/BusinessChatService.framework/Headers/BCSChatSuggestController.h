// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSCHATSUGGESTCONTROLLER_H
#define BCSCHATSUGGESTCONTROLLER_H

@class NSString;
@protocol BCSChatSuggestControllerProtocol, BCSUserDefaultsProviding, BCSIdentityServiceProtocol, BCSLocaleHelperProtocol;

#import <Foundation/Foundation.h>


@interface BCSChatSuggestController : NSObject <BCSChatSuggestControllerProtocol>

 {
    id<BCSUserDefaultsProviding> *_userDefaults;
    id<BCSIdentityServiceProtocol> *_identityService;
    id<BCSLocaleHelperProtocol> *_localeHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)chatSuggestVisibilityForBusinessItem:(id)arg0 ;


@end


#endif