// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREPLATFORMRESPONSEGROUP_H
#define ICSTOREPLATFORMRESPONSEGROUP_H

@class NSArray, NSNumber, NSString, NSDate;
@protocol ICStorePlatformResponse;

#import <Foundation/Foundation.h>


@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse>

 {
    NSArray *_childResponses;
}


@property (readonly, copy, nonatomic) NSNumber *accountIdentifier;
@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *performanceMetrics;
@property (readonly, copy, nonatomic) id *rawResponse;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResponses:(id)arg0 ;
-(id)itemForIdentifier:(id)arg0 ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;


@end


#endif