// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLREQUESTINTERNAL_H
#define NSURLREQUESTINTERNAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSURLRequestInternal : NSObject <NSCopying>

 {
    URLRequest _request;
}


@property (readonly) *void _inner;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMessage:(struct __CFHTTPMessage *)arg0 bodyParts:(struct __CFArray *)arg1 cachePolicy:(NSUInteger)arg2 timeout:(CGFloat)arg3 mainDocumentURL:(struct __CFURL *)arg4 mutable:(unsigned char)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif