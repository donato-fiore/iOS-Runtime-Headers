// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFULLSCREENEFFECTMESSAGEFILTER_H
#define CKFULLSCREENEFFECTMESSAGEFILTER_H

@class NSArray, CAFilter, UIColor;

#import <Foundation/Foundation.h>


@interface CKFullscreenEffectMessageFilter : NSObject

@property (nonatomic) CGFloat balloonAlpha; // ivar: _balloonAlpha
@property (copy, nonatomic) NSArray *balloonBackdropFilters; // ivar: _balloonBackdropFilters
@property (copy, nonatomic) CAFilter *balloonCompositingFilter; // ivar: _balloonCompositingFilter
@property (copy, nonatomic) NSArray *balloonFilters; // ivar: _balloonFilters
@property (nonatomic) CGFloat contentAlpha; // ivar: _contentAlpha
@property (nonatomic) int direction; // ivar: _direction
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) CAFilter *textCompositingFilter; // ivar: _textCompositingFilter
@property (nonatomic) int type; // ivar: _type


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif