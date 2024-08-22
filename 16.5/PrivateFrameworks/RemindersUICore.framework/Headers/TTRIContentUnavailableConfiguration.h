// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTRICONTENTUNAVAILABLECONFIGURATION_H
#define TTRICONTENTUNAVAILABLECONFIGURATION_H

@class NSAttributedString, NSString, UIImage;
@protocol UIContentConfiguration;


#import "TTRIUIContentUnavailableShim.h"
#import "TTRIContentUnavailableButtonProperties.h"
#import "TTRIContentUnavailableTextProperties.h"

@interface TTRIContentUnavailableConfiguration : TTRIUIContentUnavailableShim <UIContentConfiguration>



@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) TTRIContentUnavailableButtonProperties *buttonProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) TTRIContentUnavailableTextProperties *secondaryTextProperties;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) TTRIContentUnavailableTextProperties *textProperties;


+(Class)implClass;
+(id)emptyConfiguration;
+(id)emptyProminentConfiguration;
+(id)loadingConfiguration;
+(id)searchConfiguration;
-(id)asUIKit;
-(id)makeContentView;
-(id)updatedConfigurationForState:(id)arg0 ;


@end


#endif