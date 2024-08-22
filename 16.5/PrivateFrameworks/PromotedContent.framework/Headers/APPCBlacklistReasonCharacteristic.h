// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCBLACKLISTREASONCHARACTERISTIC_H
#define APPCBLACKLISTREASONCHARACTERISTIC_H

@class NSArray;
@protocol APPCPromotableBlacklistReasonCharacteristic;

#import <Foundation/Foundation.h>


@interface APPCBlacklistReasonCharacteristic : NSObject <APPCPromotableBlacklistReasonCharacteristic>

 {
    ? globalCategories;
    ? globalKeywords;
    ? campaignCategories;
    ? campaignKeywords;
}


@property (nonatomic, copy) NSArray *campaignCategories;
@property (nonatomic, copy) NSArray *campaignKeywords;
@property (nonatomic, copy) NSArray *globalCategories;
@property (nonatomic, copy) NSArray *globalKeywords;


-(id)init;
-(id)initWithGlobalCategories:(id)arg0 globalKeywords:(id)arg1 campaignCategories:(id)arg2 campaignKeywords:(id)arg3 ;


@end


#endif