// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAPASSWORDSECURITYUIREQUEST_H
#define AAPASSWORDSECURITYUIREQUEST_H



#import "AAAppleIDSettingsRequest.h"

@interface AAPasswordSecurityUIRequest : AAAppleIDSettingsRequest

@property (nonatomic) NSUInteger spyglassOptionMask; // ivar: _spyglassOptionMask


-(id)urlRequest;
-(id)urlString;


@end


#endif