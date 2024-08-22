// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCAPPSTORESUPPLEMENTALCONTEXT_H
#define APPCAPPSTORESUPPLEMENTALCONTEXT_H

@class NSString, NSDictionary, NSDate;
@protocol APPCPromotableAppStoreSupplementalContext;

#import <Foundation/Foundation.h>


@interface APPCAppStoreSupplementalContext : NSObject <APPCPromotableAppStoreSupplementalContext>

 {
    ? storeFront;
    ? storeFrontLocale;
    ? impressionCap;
    ? clickCap;
    ? additionalImpressionCaps;
    ? additionalClickCaps;
    ? adamId;
    ? appMetadataFields;
    ? requestTime;
}


@property (nonatomic, copy) NSString *adamId;
@property (nonatomic, copy) NSDictionary *additionalClickCaps;
@property (nonatomic, copy) NSDictionary *additionalImpressionCaps;
@property (nonatomic, copy) NSDictionary *appMetadataFields;
@property (nonatomic, copy) NSDictionary *clickCap;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSDictionary *impressionCap;
@property (nonatomic, copy) NSDate *requestTime;
@property (nonatomic, readonly) NSString *storeFront;
@property (nonatomic, readonly) NSString *storeFrontLocale;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;


@end


#endif