// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTRIBUTIONVIEWHIGHLIGHTCONFIGURATION_H
#define ICATTRIBUTIONVIEWHIGHLIGHTCONFIGURATION_H

@class UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICAttributionViewHighlightConfiguration : NSObject <NSCopying>



@property (nonatomic) CGRect adjustedFrame; // ivar: _adjustedFrame
@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGRect frame; // ivar: _frame
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICAttributionViewHighlightConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif