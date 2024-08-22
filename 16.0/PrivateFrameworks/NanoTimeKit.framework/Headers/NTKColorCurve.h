// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOLORCURVE_H
#define NTKCOLORCURVE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NTKColorCurve : NSObject

@property (readonly, nonatomic) NSArray *colorCurveElements; // ivar: _colorCurveElements


-(id)colorForFraction:(float)arg0 ;
-(id)initWithColorCurveElements:(id)arg0 ;


@end


#endif