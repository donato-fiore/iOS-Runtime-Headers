// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVPLATFORMCONTEXT_H
#define SSVPLATFORMCONTEXT_H

@class NSDictionary, NSString, NSArray;
@protocol NSCopying, SSVSAPContext;

#import <Foundation/Foundation.h>


@interface SSVPlatformContext : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<SSVSAPContext> *SAPContext; // ivar: _sapContext
@property (readonly, nonatomic) NSDictionary *bagDictionary;
@property (readonly, nonatomic) NSString *lookupURLString; // ivar: _lookupURLString
@property (readonly, nonatomic) NSArray *signedHeaders; // ivar: _signedHeaders
@property (readonly, nonatomic) NSArray *signedQueryParameters; // ivar: _signedQueryParameters
@property (readonly, nonatomic) NSString *unpersonalizedLookupURLString; // ivar: _unpersonalizedLookupURLString


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBagDictionary:(id)arg0 ;
-(id)initWithLookupURL:(id)arg0 unpersonalizedLookupURL:(id)arg1 signedHeaders:(id)arg2 signedQueryParameters:(id)arg3 ;


@end


#endif