// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VITEXTANNOTATION_H
#define VITEXTANNOTATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VITextAnnotation : NSObject <NSCopying>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) CGRect normalizedBoundingBox; // ivar: _normalizedBoundingBox
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithText:(id)arg0 normalizedBoundingBox:(struct CGRect )arg1 confidence:(float)arg2 ;


@end


#endif