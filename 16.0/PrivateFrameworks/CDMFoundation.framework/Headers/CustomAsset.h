// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUSTOMASSET_H
#define CUSTOMASSET_H

@class NSString, NSDictionary;
@protocol NLAsset;

#import <Foundation/Foundation.h>


@interface CustomAsset : NSObject <NLAsset>

 {
    NSString *_path;
    NSString *_version;
    NSDictionary *_assetMetadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)getAssetType;
-(id)getAssetMetadata;
-(id)getAssetPath;
-(id)getAssetVersion;
-(id)initWithPath:(id)arg0 ;
-(id)toDictionary;


@end


#endif