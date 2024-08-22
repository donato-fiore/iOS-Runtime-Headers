// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECONTENTTAG_H
#define AVMOBILECONTENTTAG_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface AVMobileContentTag : NSObject

@property (readonly, nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (readonly, nonatomic) float normalizedCornerRadius; // ivar: _normalizedCornerRadius
@property (readonly, nonatomic) NSUInteger placement; // ivar: _placement
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)adContentTag;
+(id)adContentTagWithTintColor:(id)arg0 ;
+(id)liveContentTag;
-(id)_initInternal;


@end


#endif