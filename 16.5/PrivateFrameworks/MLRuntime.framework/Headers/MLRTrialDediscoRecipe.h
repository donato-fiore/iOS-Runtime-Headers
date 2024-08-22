// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRTRIALDEDISCORECIPE_H
#define MLRTRIALDEDISCORECIPE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MLRTrialDediscoRecipe : NSObject

@property (readonly, nonatomic) NSString *baseKeyFormat; // ivar: _baseKeyFormat
@property (readonly, nonatomic) NSDictionary *encodingSchema; // ivar: _encodingSchema


-(id)description;
-(id)initWithAssetURL:(id)arg0 configOverride:(id)arg1 error:(*id)arg2 ;


@end


#endif