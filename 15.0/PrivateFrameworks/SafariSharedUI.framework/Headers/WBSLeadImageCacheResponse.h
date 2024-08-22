// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSLEADIMAGECACHERESPONSE_H
#define WBSLEADIMAGECACHERESPONSE_H

@class UIImage;


#import "WBSSiteMetadataResponse.h"

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) UIImage *thumbnail; // ivar: _thumbnail


+(id)responseWithURL:(id)arg0 thumbnail:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 thumbnail:(id)arg1 ;


@end


#endif