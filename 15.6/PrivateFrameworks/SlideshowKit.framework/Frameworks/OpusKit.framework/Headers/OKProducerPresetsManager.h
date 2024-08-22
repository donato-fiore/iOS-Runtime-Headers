// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKPRODUCERPRESETSMANAGER_H
#define OKPRODUCERPRESETSMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OKProducerPresetsManager : NSObject {
    NSMutableDictionary *_presetsByFamily;
}




+(id)defaultManager;
-(id)_defaultPresetsByName;
-(id)_presetsByNameForFamily:(id)arg0 ;
-(id)defaultPresets;
-(id)defaultPresetsForFamily:(id)arg0 ;
-(id)init;
-(id)presetForUniqueIdentifier:(id)arg0 ;
-(id)presetWithUniqueIdentifier:(id)arg0 ;
-(id)presetsForFamily:(id)arg0 ;
-(void)dealloc;


@end


#endif