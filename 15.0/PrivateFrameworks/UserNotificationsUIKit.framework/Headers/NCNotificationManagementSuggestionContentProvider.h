// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONMANAGEMENTSUGGESTIONCONTENTPROVIDER_H
#define NCNOTIFICATIONMANAGEMENTSUGGESTIONCONTENTPROVIDER_H

@class NSString;
@protocol NCSuggestionContentProviding, NCNotificationManagementSuggestionDelegate;


#import "NCNotificationManagementContentProvider.h"

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCSuggestionContentProviding>



@property (nonatomic) BOOL auxiliaryOptionsVisible; // ivar: _auxiliaryOptionsVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfOptionButtons; // ivar: _numberOfOptionButtons
@property (copy, nonatomic) NSString *optionsSummaryText; // ivar: _optionsSummaryText
@property (readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property (weak, nonatomic) NSObject<NCNotificationManagementSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (readonly) Class superclass;


-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 ;
-(void)configureOptionButtons:(id)arg0 ;


@end


#endif