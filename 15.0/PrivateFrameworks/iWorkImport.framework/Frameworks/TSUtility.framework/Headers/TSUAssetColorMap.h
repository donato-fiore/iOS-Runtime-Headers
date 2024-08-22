// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUASSETCOLORMAP_H
#define TSUASSETCOLORMAP_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface TSUAssetColorMap : NSObject {
    NSMutableDictionary *mAssetPathToColorMap;
}


@property (readonly, copy, nonatomic) NSDictionary *assetPathToColorMap;


+(id)assetColorMap;
-(id)TSUColorFromColorArray:(id)arg0 ;
-(id)init;
-(void)addChartEntries;
-(void)addEntriesFromPlistBasename:(id)arg0 transformKeyBlock:(id)arg1 ;
-(void)addSharedEntries;


@end


#endif