// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTCATEGORYCODEMAP_H
#define PKMERCHANTCATEGORYCODEMAP_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PKMerchantCategoryCodeMap : NSObject {
    NSDictionary *_mccCodeToMerchantCategory;
}




-(NSInteger)categoryForIndustryCode:(NSInteger)arg0 ;
-(id)init;


@end


#endif