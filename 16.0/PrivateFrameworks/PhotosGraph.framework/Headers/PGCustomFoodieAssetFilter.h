// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCUSTOMFOODIEASSETFILTER_H
#define PGCUSTOMFOODIEASSETFILTER_H

@class CLSSceneConfidenceThresholdHelper, NSString;
@protocol PGAssetFilter;

#import <Foundation/Foundation.h>


@interface PGCustomFoodieAssetFilter : NSObject <PGAssetFilter>

 {
    CLSSceneConfidenceThresholdHelper *_foodScenesHelper;
    CLSSceneConfidenceThresholdHelper *_drinkScenesHelper;
    CLSSceneConfidenceThresholdHelper *_forbiddenScenesHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)name;
-(BOOL)_passesWithAsset:(id)arg0 curationContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)filteredAssetsFromAssets:(id)arg0 curationContext:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif