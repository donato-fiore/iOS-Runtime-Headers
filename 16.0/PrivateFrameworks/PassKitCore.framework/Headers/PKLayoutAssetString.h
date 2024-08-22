// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLAYOUTASSETSTRING_H
#define PKLAYOUTASSETSTRING_H

@class NSDictionary, NSString;
@protocol PKDynamicTemplateLayoutAsset;

#import <Foundation/Foundation.h>


@interface PKLayoutAssetString : NSObject <PKDynamicTemplateLayoutAsset>



@property (retain, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayText; // ivar: _displayText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)assetKey;
+(id)nameToAssetsMapFromDictionaries:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif