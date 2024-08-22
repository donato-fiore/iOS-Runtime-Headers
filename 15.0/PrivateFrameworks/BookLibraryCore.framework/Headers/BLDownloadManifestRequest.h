// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLDOWNLOADMANIFESTREQUEST_H
#define BLDOWNLOADMANIFESTREQUEST_H

@class NSURLRequest;
@protocol NSSecureCoding;


#import "BLRequest.h"

@interface BLDownloadManifestRequest : BLRequest <NSSecureCoding>



@property (retain, nonatomic) NSURLRequest *URLRequest; // ivar: _urlRequest


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)startWithManifestResponseBlock:(id)arg0 ;


@end


#endif