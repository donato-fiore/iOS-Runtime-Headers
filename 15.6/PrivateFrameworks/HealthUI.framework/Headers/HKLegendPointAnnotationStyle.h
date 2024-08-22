// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKLEGENDPOINTANNOTATIONSTYLE_H
#define HKLEGENDPOINTANNOTATIONSTYLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKAxisLabelStyle.h"

@interface HKLegendPointAnnotationStyle : NSObject <NSCopying>



@property (copy, nonatomic) HKAxisLabelStyle *labelStyle; // ivar: _labelStyle
@property (nonatomic) BOOL leftOfSeries; // ivar: _leftOfSeries
@property (copy, nonatomic) NSString *localizedLabelKey; // ivar: _localizedLabelKey


+(id)annotationStyleWithLabelStyle:(id)arg0 localizedLabelKey:(id)arg1 leftOfSeries:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif