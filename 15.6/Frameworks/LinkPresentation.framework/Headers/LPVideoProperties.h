// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPVIDEOPROPERTIES_H
#define LPVIDEOPROPERTIES_H

@class UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LPVideoProperties : NSObject <NSCopying>



@property (retain, nonatomic, setter=_setOverlappingControlsColor:) UIColor *_overlappingControlsColor; // ivar: _overlappingControlsColor
@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (nonatomic) BOOL hasAudio; // ivar: _hasAudio


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif