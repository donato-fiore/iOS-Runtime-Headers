// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXLAYOUTMETRICS_H
#define PXLAYOUTMETRICS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXLayoutMetrics : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (nonatomic) CGSize referenceSize; // ivar: _referenceSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif