// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXOEMBEDPHOTORESPONSE_H
#define SXOEMBEDPHOTORESPONSE_H

@class NSURL;


#import "SXOEmbedResponse.h"

@interface SXOEmbedPhotoResponse : SXOEmbedResponse

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) CGFloat width;




@end


#endif