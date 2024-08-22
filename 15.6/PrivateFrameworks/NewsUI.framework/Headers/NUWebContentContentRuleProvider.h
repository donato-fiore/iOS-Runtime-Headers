// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUWEBCONTENTCONTENTRULEPROVIDER_H
#define NUWEBCONTENTCONTENTRULEPROVIDER_H

@class NSString;
@protocol SXWebContentComponentContentRuleProvider, FCNewsAppConfigurationManager, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface NUWebContentContentRuleProvider : NSObject <SXWebContentComponentContentRuleProvider>



@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly) Class superclass;


-(id)contentRules;
-(id)initWithAppConfigurationManager:(id)arg0 headline:(id)arg1 ;


@end


#endif