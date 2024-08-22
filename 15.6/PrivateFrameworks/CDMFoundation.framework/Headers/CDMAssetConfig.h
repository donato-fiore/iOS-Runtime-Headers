// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMASSETCONFIG_H
#define CDMASSETCONFIG_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CDMAssetConfig : NSObject {
    NSMutableDictionary *_assetConfigs;
}




-(BOOL)hasAssetConfigItems;
-(id)getAssetConfigItemForKey:(id)arg0 ;
-(id)getAssetConfigItems;
-(id)init;
-(void)addAssetConfigItem:(id)arg0 forKey:(id)arg1 ;


@end


#endif