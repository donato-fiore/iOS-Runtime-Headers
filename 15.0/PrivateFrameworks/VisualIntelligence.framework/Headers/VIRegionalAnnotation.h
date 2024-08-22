// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIREGIONALANNOTATION_H
#define VIREGIONALANNOTATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIRegionalAnnotation : NSObject <NSCopying>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) CGRect normalizedBoundingBox; // ivar: _normalizedBoundingBox


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLabel:(id)arg0 normalizedBoundingBox:(struct CGRect )arg1 confidence:(float)arg2 ;


@end


#endif