// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGASSETCOLLECTIONFEATUREDEFINITION_H
#define PGASSETCOLLECTIONFEATUREDEFINITION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PGAudioAssetFilter.h"
#import "PGCustomFoodieAssetFilter.h"
#import "PGPeopleAssetFilter.h"
#import "PGSceneAssetFilter.h"
#import "PGSocialGroupAssetFilter.h"

@interface PGAssetCollectionFeatureDefinition : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PGAudioAssetFilter *audioAssetFilter; // ivar: _audioAssetFilter
@property (readonly, nonatomic) PGCustomFoodieAssetFilter *customAssetFilter; // ivar: _customAssetFilter
@property (readonly, nonatomic) PGPeopleAssetFilter *peopleAssetFilter; // ivar: _peopleAssetFilter
@property (readonly, nonatomic) PGSceneAssetFilter *sceneAssetFilter; // ivar: _sceneAssetFilter
@property (readonly, nonatomic) PGSocialGroupAssetFilter *socialGroupAssetFilter; // ivar: _socialGroupAssetFilter


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAssetFilterByName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif