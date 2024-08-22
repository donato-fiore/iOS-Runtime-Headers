// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXEFFECTFACTORYDELEGATE_H
#define CFXEFFECTFACTORYDELEGATE_H

@class NSString;
@protocol JFXEffectFactoryDelegate;

#import <Foundation/Foundation.h>


@interface CFXEffectFactoryDelegate : NSObject <JFXEffectFactoryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)CFX_disableExpensiveFilters;
-(BOOL)CFX_enoughPowerForStyleTransfer;
-(BOOL)CFX_isExpensiveEffectID:(id)arg0 withFactory:(id)arg1 ;
-(BOOL)effectFactory:(id)arg0 isStyleTransferEffectID:(id)arg1 ;
-(Class)JFXEffectClassForType:(int)arg0 ;
-(id)CFX_animojiEffectsWithFactory:(id)arg0 ;
-(id)CFX_filterEffectsWithFactory:(id)arg0 ;
-(id)CFX_overlayEffectsWithFactory:(id)arg0 ;
-(id)CFX_styleTransferEffectIDs;
-(id)effectFactory:(id)arg0 createEffectContentDataSourceForEffectID:(id)arg1 ofType:(int)arg2 ;
-(id)styleTransferEffectIDsForFactory:(id)arg0 ;
-(void)effectFactory:(id)arg0 effectIDsAvailableForType:(int)arg1 completion:(id)arg2 ;


@end


#endif