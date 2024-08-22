// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCACHEDURLRESPONSE_H
#define NSCACHEDURLRESPONSE_H

@class NSData, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSCachedURLResponseInternal.h"
#import "NSURLResponse.h"

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying>

 {
    NSCachedURLResponseInternal *_internal;
}


@property (readonly, copy) NSData *data;
@property (readonly, copy) NSURLResponse *response;
@property (readonly) NSUInteger storagePolicy;
@property (readonly, copy) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
-(id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponse:(id)arg0 data:(id)arg1 ;
-(id)initWithResponse:(id)arg0 data:(id)arg1 userInfo:(id)arg2 storagePolicy:(NSUInteger)arg3 ;
-(id)initWithResponse:(id)arg0 dataArray:(id)arg1 userInfo:(id)arg2 storagePolicy:(NSUInteger)arg3 ;
-(struct _CFCachedURLResponse *)_CFCachedURLResponse;
-(void)_deallocInternalCFCachedURLResponse;
-(void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif