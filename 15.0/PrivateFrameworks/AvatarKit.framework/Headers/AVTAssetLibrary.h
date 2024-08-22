// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTASSETLIBRARY_H
#define AVTASSETLIBRARY_H


#import <Foundation/Foundation.h>


@interface AVTAssetLibrary : NSObject {
    NSMutableArray" _assets;
    NSMutableDictionary" _assetsByName;
}




+(id)sharedAssetLibrary;
-(id)assetWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(void)reload;


@end


#endif