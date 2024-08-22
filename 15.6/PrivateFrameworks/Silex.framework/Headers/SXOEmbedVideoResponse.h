// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXOEMBEDVIDEORESPONSE_H
#define SXOEMBEDVIDEORESPONSE_H

@class NSString;


#import "SXOEmbedResponse.h"

@interface SXOEmbedVideoResponse : SXOEmbedResponse

@property (readonly, nonatomic) NSString *HTML;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) CGFloat width;


+(id)jsonPropertyNameForObjCPropertyName:(id)arg0 ;


@end


#endif