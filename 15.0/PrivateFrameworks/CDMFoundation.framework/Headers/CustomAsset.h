// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUSTOMASSET_H
#define CUSTOMASSET_H

@class NSString;
@protocol NLAsset;

#import <Foundation/Foundation.h>


@interface CustomAsset : NSObject <NLAsset>

 {
    NSString *_path;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)getAssetType;
-(id)getAssetPath;
-(id)initWithPath:(id)arg0 ;


@end


#endif