// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCREQUESTINFO_H
#define RCREQUESTINFO_H

@class NSArray, NSDictionary, NSURL, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface RCRequestInfo : NSObject

@property (readonly, nonatomic) NSArray *additionalChangeTags; // ivar: _additionalChangeTags
@property (readonly) NSDictionary *allAdditionalFields;
@property (readonly, nonatomic) NSURL *fallbackURL; // ivar: _fallbackURL
@property (readonly, nonatomic) NSMutableDictionary *mutableAdditionalFields; // ivar: _mutableAdditionalFields
@property (readonly, nonatomic) NSString *requestCacheKey; // ivar: _requestCacheKey
@property (readonly, nonatomic) NSUInteger requestFeedType; // ivar: _requestFeedType
@property (readonly, copy, nonatomic) NSString *requestKey; // ivar: _requestKey
@property (readonly, nonatomic) NSUInteger requestType; // ivar: _requestType
@property (readonly, copy, nonatomic) NSString *responseKey; // ivar: _responseKey


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 ;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 requestType:(NSUInteger)arg3 additionalChangeTags:(id)arg4 ;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 requestType:(NSUInteger)arg3 additionalChangeTags:(id)arg4 requestFeedType:(NSUInteger)arg5 ;
-(void)setValue:(id)arg0 forAdditionalField:(id)arg1 ;


@end


#endif