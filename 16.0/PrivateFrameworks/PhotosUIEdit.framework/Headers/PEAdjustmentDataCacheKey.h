// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEADJUSTMENTDATACACHEKEY_H
#define PEADJUSTMENTDATACACHEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PEAdjustmentDataCacheKey : NSObject <NSCopying>

 {
    NSString *_localIdentifier;
    CGFloat _adjustmentDate;
    BOOL _originalAdjustmentData;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAsset:(id)arg0 originalAdjustmentData:(BOOL)arg1 ;


@end


#endif