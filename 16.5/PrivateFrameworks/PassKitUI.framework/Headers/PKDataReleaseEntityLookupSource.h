// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATARELEASEENTITYLOOKUPSOURCE_H
#define PKDATARELEASEENTITYLOOKUPSOURCE_H

@class NSString;
@protocol PKMerchantLookupRequestSource;

#import <Foundation/Foundation.h>


@interface PKDataReleaseEntityLookupSource : NSObject <PKMerchantLookupRequestSource>

 {
    NSString *_entity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isRefund;
-(BOOL)isSettlement;
-(NSInteger)type;
-(id)identifier;
-(id)initWithEntityIdentifier:(id)arg0 ;
-(id)mapsMerchantLookupRequest;
-(id)mapsURL;


@end


#endif