// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIVISUALQUERY_H
#define VIVISUALQUERY_H

@class NSSet;
@protocol NSCopying, VIImageContent;

#import <Foundation/Foundation.h>

#import "VIAnnotation.h"
#import "VIQueryContext.h"

@interface VIVisualQuery : NSObject <NSCopying>



@property (readonly, nonatomic) VIAnnotation *annotation; // ivar: _annotation
@property (readonly, nonatomic) NSSet *domainsOfInterest; // ivar: _domainsOfInterest
@property (readonly, nonatomic) NSObject<VIImageContent> *image; // ivar: _image
@property (readonly, nonatomic) CGRect normalizedRegionOfInterest; // ivar: _normalizedRegionOfInterest
@property (readonly, nonatomic) VIQueryContext *queryContext; // ivar: _queryContext


+(id)queryWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 ;
+(id)queryWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 normalizedRegionOfInterest:(struct CGRect )arg2 ;
+(id)queryWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 normalizedRegionOfInterest:(struct CGRect )arg2 annotation:(id)arg3 queryContext:(id)arg4 ;
+(id)queryWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 normalizedRegionOfInterest:(struct CGRect )arg2 textBlockAnnotation:(id)arg3 queryContext:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImage:(id)arg0 annotation:(id)arg1 normalizedRegionOfInterest:(struct CGRect )arg2 domainsOfInterest:(id)arg3 queryContext:(id)arg4 ;
-(id)initWithImage:(id)arg0 textBlockAnnotation:(id)arg1 normalizedRegionOfInterest:(struct CGRect )arg2 domainsOfInterest:(id)arg3 queryContext:(id)arg4 ;


@end


#endif