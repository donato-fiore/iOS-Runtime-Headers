// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WDCHARTDATACACHECONTROLLERDISPLAYTYPETIMESCOPETUPLE_H
#define _WDCHARTDATACACHECONTROLLERDISPLAYTYPETIMESCOPETUPLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"

@interface _WDChartDataCacheControllerDisplayTypeTimeScopeTuple : NSObject <NSCopying>

 {
    HKDisplayType *_displayType;
    NSInteger _timeScope;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDisplayType:(id)arg0 timeScope:(NSInteger)arg1 ;


@end


#endif