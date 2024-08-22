// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTOREPLATFORMRESPONSE_H
#define ICSTOREPLATFORMRESPONSE_H

@class NSArray, NSDictionary, NSString, NSNumber, NSDate;
@protocol ICStorePlatformResponse;

#import <Foundation/Foundation.h>


@interface ICStorePlatformResponse : NSObject <ICStorePlatformResponse>

 {
    NSArray *_requestedItemIdentifiers;
    NSDictionary *_responseDictionary;
    NSString *_storefrontIdentifier;
}


@property (readonly, copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier; // ivar: _enqueuerAccountIdentifier
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *performanceMetrics; // ivar: _performanceMetrics
@property (readonly, copy, nonatomic) id *rawResponse;
@property (readonly, copy, nonatomic) NSDictionary *resultsDictionary;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 requestedItemIdentifiers:(id)arg1 ;
-(id)initWithURLResponse:(id)arg0 requestedItemIdentifiers:(id)arg1 ;
-(id)itemForIdentifier:(id)arg0 ;
-(void)_enumerateResultDictionariesUsingBlock:(id)arg0 ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;


@end


#endif