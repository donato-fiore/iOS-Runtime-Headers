// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXEFFECTFACTORY_H
#define JFXEFFECTFACTORY_H


#import <Foundation/Foundation.h>


@interface JFXEffectFactory : NSObject



+(id)delegate;
+(id)sharedInstance;
+(void)setDelegate:(id)arg0 ;
-(BOOL)isStyleTransferEffectID:(id)arg0 ;
-(id)createEffectContentDataSourceForEffectID:(id)arg0 ofType:(int)arg1 ;
-(id)createEffectForType:(int)arg0 fromID:(id)arg1 withProperties:(id)arg2 ;
-(id)effectsForType:(int)arg0 fromCategory:(id)arg1 ;
-(id)noneEffectIDForType:(int)arg0 ;
-(id)styleTransferEffectIDs;
-(void)defaultPickerItemForType:(int)arg0 completion:(id)arg1 ;
-(void)effectCategoriesForPickerItem:(id)arg0 completion:(id)arg1 ;
-(void)effectCategoriesForType:(int)arg0 completion:(id)arg1 ;
-(void)effectIDsForPickerItem:(id)arg0 completion:(id)arg1 ;
-(void)effectIDsForType:(int)arg0 completion:(id)arg1 ;
-(void)effectsForType:(int)arg0 completion:(id)arg1 ;
-(void)effectsForType:(int)arg0 pickerItem:(id)arg1 completion:(id)arg2 ;
-(void)fetchPickerItems:(id)arg0 ;
-(void)pickerItemForCategory:(id)arg0 completion:(id)arg1 ;


@end


#endif