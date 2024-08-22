// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UCAPPCLIPCODEURLENCODINGRESULT_H
#define UCAPPCLIPCODEURLENCODINGRESULT_H

@class NSData, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface UCAppClipCodeURLEncodingResult : NSObject

@property (readonly, nonatomic) NSData *appClipCodeBytes; // ivar: _appClipCodeBytes
@property (nonatomic) BOOL hasPathOrQueryEncoding; // ivar: _hasPathOrQueryEncoding
@property (nonatomic) NSInteger hostEncodedBitCount; // ivar: _hostEncodedBitCount
@property (nonatomic) NSInteger hostEncodingFormat; // ivar: _hostEncodingFormat
@property (nonatomic) NSInteger nonTemplatePathAndQueryEncodeType; // ivar: _nonTemplatePathAndQueryEncodeType
@property (readonly, copy, nonatomic) NSString *rawEncodedBits; // ivar: _rawEncodedBits
@property (nonatomic) NSInteger subdomainType; // ivar: _subdomainType
@property (nonatomic) NSInteger templateType; // ivar: _templateType
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)resultWithRawEncodedBits:(id)arg0 appClipCodeBytes:(id)arg1 ;
-(id)initWithRawEncodedBits:(id)arg0 appClipCodeBytes:(id)arg1 ;


@end


#endif