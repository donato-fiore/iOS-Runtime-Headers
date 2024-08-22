// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDROPCAPCHARACTERMETRICDATA_H
#define TSWPDROPCAPCHARACTERMETRICDATA_H


#import <Foundation/Foundation.h>


@interface TSWPDropCapCharacterMetricData : NSObject

@property (readonly, nonatomic) BOOL hasLeadingOffset;
@property (readonly, nonatomic) BOOL hasTrailingOffset;
@property (nonatomic) CGFloat leadingOffset; // ivar: _leadingOffset
@property (nonatomic) CGFloat trailingOffset; // ivar: _trailingOffset


-(id)init;


@end


#endif