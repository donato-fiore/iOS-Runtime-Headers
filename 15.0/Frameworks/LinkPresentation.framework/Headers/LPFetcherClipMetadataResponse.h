// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPFETCHERCLIPMETADATARESPONSE_H
#define LPFETCHERCLIPMETADATARESPONSE_H

@class NSURL, CPSClipMetadata;


#import "LPFetcherResponse.h"

@interface LPFetcherClipMetadataResponse : LPFetcherResponse

@property (readonly, copy, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (readonly, copy, nonatomic) CPSClipMetadata *metadata; // ivar: _metadata


-(id)initWithClipMetadata:(id)arg0 iconURL:(id)arg1 fetcher:(id)arg2 ;


@end


#endif