// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITUNESPASSCONFIGURATION_H
#define SKUIITUNESPASSCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKUIITunesPassConfiguration : NSObject {
    NSString *_dialogLearnMoreButton;
    NSString *_dialogMessage;
    NSString *_dialogNotNowButton;
    NSString *_dialogTitle;
}


@property (readonly, nonatomic) NSString *learnMoreAddPassButtonTitle; // ivar: _learnMoreAddPassButtonTitle
@property (readonly, nonatomic) NSString *learnMoreDoneButtonTitle; // ivar: _learnMoreDoneButtonTitle
@property (readonly, nonatomic) NSString *learnMoreExplanation; // ivar: _learnMoreExplanation
@property (readonly, nonatomic) NSString *learnMoreTitle; // ivar: _learnMoreTitle
@property (readonly, nonatomic) NSString *learnMoreViewPassButtonTitle; // ivar: _learnMoreViewPassButtonTitle
@property (readonly, nonatomic) NSString *lockupDescription; // ivar: _lockupDescription
@property (readonly, nonatomic) NSString *lockupLearnMoreLinkTitle; // ivar: _lockupLearnMoreLinkTitle
@property (readonly, nonatomic) NSString *lockupTitle; // ivar: _lockupTitle


-(id)initWithITunesPassDictionary:(id)arg0 clientContext:(id)arg1 ;
-(id)learnMoreAlertView;


@end


#endif