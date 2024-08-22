// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSHTTPURLREQUESTPARAMETERS_H
#define NSHTTPURLREQUESTPARAMETERS_H

@class NSString, NSMutableDictionary, NSArray, NSData;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface NSHTTPURLRequestParameters : NSObject <NSCoding>

 {
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    NSUInteger pageNotFoundCacheLifetime;
    BOOL shouldHandleCookies;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif