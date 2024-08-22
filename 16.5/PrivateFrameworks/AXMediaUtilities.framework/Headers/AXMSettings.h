// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMSETTINGS_H
#define AXMSETTINGS_H

@class NSUserDefaults, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXMSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_queue_settingObservers;
}


@property (nonatomic) BOOL useANODModelForAXElementVision;
@property (nonatomic) BOOL writeOutInputImages;
@property (nonatomic) BOOL writeOutOCRInputImages;
@property (nonatomic) BOOL writeOutScreenCaptures;


+(id)settings;
-(id)_init;
-(void)_queue_removeObserver:(id)arg0 forSetting:(id)arg1 ;
-(void)addObserver:(id)arg0 forSeetting:(id)arg1 withBlock:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 forSetting:(id)arg1 ;
-(void)removeObserverForAllSettings:(id)arg0 ;


@end


#endif