// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSERVERCONFIGURATIONRESPONSE_H
#define WLKSERVERCONFIGURATIONRESPONSE_H

@class NSDate, NSDictionary, NSString, NSNumber;
@protocol WLKCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WLKServerConfigurationResponse : NSObject <WLKCoding, NSCopying>



@property (readonly, nonatomic, getter=isActiveUser) BOOL activeUser;
@property (readonly, nonatomic) NSUInteger environmentHash; // ivar: _environmentHash
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isFavoritesSyncEnabled) BOOL favoritesSyncEnabled;
@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (readonly, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, copy, nonatomic) NSString *utsk;
@property (readonly, copy, nonatomic) NSNumber *vppaSessionDurationInMillis;
@property (readonly, nonatomic) NSInteger vppaStatus;
@property (readonly, nonatomic) NSString *vppaStatusString;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)isValidIgnoringExpiration;
-(NSUInteger)hash;
-(id)_VPPAInfo;
-(id)_applicationProperties;
-(id)_expirationDateFromResponse:(id)arg0 ;
-(id)_requiredRequestKVPMap;
-(id)_routes;
-(id)_userProperties;
-(id)configurationResponseByReplacingUTSK:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithServerResponseDictionary:(id)arg0 expirationDate:(id)arg1 environmentHash:(NSUInteger)arg2 ;
-(id)requiredRequestKeyValuePairsForType:(id)arg0 ;
-(id)serverRouteNamed:(id)arg0 ;
-(id)utsc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif