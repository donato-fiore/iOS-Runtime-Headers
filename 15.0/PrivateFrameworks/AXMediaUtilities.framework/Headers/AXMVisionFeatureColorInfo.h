// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMVISIONFEATURECOLORINFO_H
#define AXMVISIONFEATURECOLORINFO_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *mainColorWeights; // ivar: _mainColorWeights
@property (retain, nonatomic) NSArray *mainColors; // ivar: _mainColors
@property (nonatomic) CGFloat remainingColorWeight; // ivar: _remainingColorWeight


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateMainColors:(id)arg0 ;


@end


#endif