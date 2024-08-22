// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSCACHEKEY_H
#define ICMUSICSUBSCRIPTIONSTATUSCACHEKEY_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *storefrontIdentifier; // ivar: _storefrontIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentationIncludingDSID:(BOOL)arg0 ;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 requiringDSID:(BOOL)arg1 ;
-(id)initWithStringRepresentation:(id)arg0 ;
-(id)stringRepresentation;


@end


#endif