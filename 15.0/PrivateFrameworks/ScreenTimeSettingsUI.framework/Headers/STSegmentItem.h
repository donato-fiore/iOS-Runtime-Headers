// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSEGMENTITEM_H
#define STSEGMENTITEM_H

@class NSString, UIImage, UIColor;

#import <Foundation/Foundation.h>


@interface STSegmentItem : NSObject

@property (copy) NSString *accessibilityText; // ivar: _accessibilityText
@property (readonly, nonatomic) UIImage *detailImage; // ivar: _detailImage
@property (readonly, copy) UIColor *detailImageTintColor; // ivar: _detailImageTintColor
@property (readonly, copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (readonly, copy, nonatomic) NSString *titleText; // ivar: _titleText


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTitleText:(id)arg0 detailText:(id)arg1 titleColor:(id)arg2 detailImage:(id)arg3 detailImageTintColor:(id)arg4 ;


@end


#endif