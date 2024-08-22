// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALHIGHLIGHTSTOREREQUESTKEY_H
#define PPSOCIALHIGHLIGHTSTOREREQUESTKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightStoreRequestKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *client; // ivar: _client
@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) NSString *variant; // ivar: _variant


+(id)socialHighlightStoreRequestKeyWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSocialHighlightStoreRequestKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementClient:(id)arg0 ;
-(id)copyWithReplacementLimit:(NSUInteger)arg0 ;
-(id)copyWithReplacementVariant:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 ;


@end


#endif