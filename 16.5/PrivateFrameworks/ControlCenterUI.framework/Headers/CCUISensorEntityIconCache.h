// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISENSORENTITYICONCACHE_H
#define CCUISENSORENTITYICONCACHE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CCUISensorEntityIconCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
+(struct CGSize )iconSize;
-(id)_imageInBundle:(id)arg0 named:(id)arg1 needsTreatment:(BOOL)arg2 ;
-(id)_init;
-(id)_keyboardSettingsIcon;
-(id)continuityCaptureIconForExtensionIdentifier:(id)arg0 ;
-(id)imageForEntity:(id)arg0 ;
-(void)preheatImageForSensorEntity:(id)arg0 ;


@end


#endif