// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIANNOTATION_H
#define VIANNOTATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VITextBlockAnnotation.h"

@interface VIAnnotation : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *faceAnnotations; // ivar: _faceAnnotations
@property (readonly, nonatomic) NSArray *humanAnnotations; // ivar: _humanAnnotations
@property (readonly, nonatomic) NSArray *nsfwAnnotations; // ivar: _nsfwAnnotations
@property (readonly, nonatomic) VITextBlockAnnotation *textBlockAnnotation; // ivar: _textBlockAnnotation


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnnotations:(id)arg0 humanAnnotations:(id)arg1 nsfwAnnotations:(id)arg2 textBlockAnnotation:(id)arg3 ;
-(id)initWithTextAnnotations:(id)arg0 ;


@end


#endif