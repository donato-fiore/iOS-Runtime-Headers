// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GKURLREQUESTDICTIONARYKEY_H
#define _GKURLREQUESTDICTIONARYKEY_H

@class NSURLRequest;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>



@property (retain, nonatomic) NSURLRequest *request; // ivar: _request


+(id)keyWithRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRequest:(id)arg0 ;


@end


#endif