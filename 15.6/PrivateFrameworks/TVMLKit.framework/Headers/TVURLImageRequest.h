// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVURLIMAGEREQUEST_H
#define TVURLIMAGEREQUEST_H

@class NSDictionary, NSString, NSURL;
@protocol TVImageDecrypter;

#import <Foundation/Foundation.h>


@interface TVURLImageRequest : NSObject

@property (retain, nonatomic) NSObject<TVImageDecrypter> *decrypter; // ivar: _decrypter
@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 headers:(id)arg1 decrypter:(id)arg2 ;
-(id)initWithURL:(id)arg0 headers:(id)arg1 identifier:(id)arg2 decrypter:(id)arg3 ;


@end


#endif