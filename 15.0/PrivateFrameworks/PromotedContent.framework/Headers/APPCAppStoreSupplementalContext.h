// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCAPPSTORESUPPLEMENTALCONTEXT_H
#define APPCAPPSTORESUPPLEMENTALCONTEXT_H

@class NSDictionary, NSString;
@protocol APPCPromotableAppStoreSupplementalContext;

#import <Foundation/Foundation.h>


@interface APPCAppStoreSupplementalContext : NSObject <APPCPromotableAppStoreSupplementalContext>

 {
    ? impressionCap;
    ? clickCap;
    ? storeFront;
    ? storeFrontLocale;
}


@property (nonatomic, readonly) NSDictionary *clickCap;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *impressionCap;
@property (nonatomic, readonly) NSString *storeFront;
@property (nonatomic, readonly) NSString *storeFrontLocale;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;


@end


#endif