// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKLAYOUTASSETIMAGE_H
#define PKLAYOUTASSETIMAGE_H

@class NSDictionary, NSString, NSArray;
@protocol PKDynamicTemplateLayoutAsset;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirementRange.h"
#import "PKRemoteImageSet.h"

@interface PKLayoutAssetImage : NSObject <PKDynamicTemplateLayoutAsset>



@property (retain, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange; // ivar: _osVersionRange
@property (retain, nonatomic) PKRemoteImageSet *remoteImage; // ivar: _remoteImage
@property (retain, nonatomic) NSArray *subimages; // ivar: _subimages
@property (readonly) Class superclass;


+(id)assetKey;
+(id)nameToAssetsMapFromDictionaries:(id)arg0 ;
-(id)initWithName:(id)arg0 remoteImage:(id)arg1 ;
-(id)initWithName:(id)arg0 subimages:(id)arg1 ;


@end


#endif