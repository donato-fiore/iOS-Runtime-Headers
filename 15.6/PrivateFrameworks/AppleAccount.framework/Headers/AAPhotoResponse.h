// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAPHOTORESPONSE_H
#define AAPHOTORESPONSE_H

@class NSValue, NSData, NSString;


#import "AAResponse.h"

@interface AAPhotoResponse : AAResponse

@property (readonly, nonatomic) NSValue *cropRect; // ivar: _cropRect
@property (readonly, nonatomic) NSData *photoData; // ivar: _photoData
@property (readonly, nonatomic) NSString *serverCacheTag; // ivar: _serverCacheTag


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif