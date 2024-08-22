// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIPARSEDVISUALQUERY_H
#define VIPARSEDVISUALQUERY_H

@protocol NSCopying, VIImageContent;

#import <Foundation/Foundation.h>

#import "VIQueryContext.h"
#import "VIVisualUnderstanding.h"

@interface VIParsedVisualQuery : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<VIImageContent> *image; // ivar: _image
@property (readonly, nonatomic) VIQueryContext *queryContext; // ivar: _queryContext
@property (readonly, nonatomic) VIVisualUnderstanding *visualUnderstanding; // ivar: _visualUnderstanding


+(id)queryWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 imageRegions:(id)arg2 payload:(id)arg3 ;
+(id)queryWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 imageRegions:(id)arg2 textBlockAnnotation:(id)arg3 queryContext:(id)arg4 payload:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImage:(id)arg0 imageRegions:(id)arg1 textBlockAnnotation:(id)arg2 queryContext:(id)arg3 payload:(id)arg4 ;
-(id)initWithImage:(id)arg0 visualUnderstanding:(id)arg1 queryContext:(id)arg2 ;


@end


#endif