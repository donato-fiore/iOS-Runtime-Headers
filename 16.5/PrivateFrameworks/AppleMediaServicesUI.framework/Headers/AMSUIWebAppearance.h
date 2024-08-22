// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBAPPEARANCE_H
#define AMSUIWEBAPPEARANCE_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AMSUIWebAppearance : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor


+(id)defaultAppearance;
+(id)secondarySystemBackgroundColor;
+(id)secondarySystemGroupedBackgroundColor;
+(id)systemBackgroundColor;
+(id)systemGroupedBackgroundColor;
+(id)tableViewAppearance;
+(id)tertiarySystemBackgroundColor;
+(id)tertiarySystemGroupedBackgroundColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)updateBackgroundColorWithJSString:(id)arg0 ;


@end


#endif