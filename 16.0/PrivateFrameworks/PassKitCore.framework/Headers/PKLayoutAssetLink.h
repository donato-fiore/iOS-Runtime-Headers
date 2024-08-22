// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLAYOUTASSETLINK_H
#define PKLAYOUTASSETLINK_H

@class NSNumber, NSDictionary, NSString, NSURL;
@protocol PKDynamicTemplateLayoutAsset;

#import <Foundation/Foundation.h>


@interface PKLayoutAssetLink : NSObject <PKDynamicTemplateLayoutAsset>



@property (retain, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (retain, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayText; // ivar: _displayText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)assetKey;
+(id)nameToAssetsMapFromDictionaries:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif