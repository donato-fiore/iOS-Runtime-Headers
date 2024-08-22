// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCUSTOMFOODIEASSETFILTER_H
#define PGCUSTOMFOODIEASSETFILTER_H

@class NSDictionary, NSString;
@protocol PGAssetFilter;

#import <Foundation/Foundation.h>


@interface PGCustomFoodieAssetFilter : NSObject <PGAssetFilter>

 {
    NSDictionary *_confidenceThresholdByFoodSceneIdentifier;
    NSDictionary *_confidenceThresholdByDrinkSceneIdentifier;
    NSDictionary *_confidenceThresholdByForbiddenSceneIdentifiers;
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