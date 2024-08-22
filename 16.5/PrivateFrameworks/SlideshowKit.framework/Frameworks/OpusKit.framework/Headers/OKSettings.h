// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKSETTINGS_H
#define OKSETTINGS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OKSettings : NSObject {
    NSMutableArray *_transactions;
}




+(BOOL)exportClassSettings:(Class)arg0 toJavaScriptContext:(id)arg1 ;
+(BOOL)isApplyingSettings;
+(id)_newSettingGetterBlockForKey:(SEL)arg0 ofType:(id)arg1 optionalSubType:(NSUInteger)arg2 optionalClass:(NSUInteger)arg3 optionalMapping:(Class)arg4 ;
+(id)_newSettingSetterBlockForKey:(SEL)arg0 ofType:(id)arg1 optionalSubType:(NSUInteger)arg2 optionalClass:(NSUInteger)arg3 optionalMapping:(Class)arg4 ;
+(id)objectFromClass:(Class)arg0 withSettings:(id)arg1 andResolution:(id)arg2 ;
+(id)transactionsManager;
+(void)applySettings:(id)arg0 toObject:(id)arg1 withResolution:(id)arg2 ;
// +(void)applyUpdateBlockOnce:(id)arg0 forKey:(unk)arg1  ;
+(void)applyValue:(id)arg0 forKey:(id)arg1 ofType:(NSUInteger)arg2 toObject:(id)arg3 ;
+(void)beginApplyingSettings;
+(void)commitApplyingSettings;
// +(void)registerApplyingSettingsUpdateBlock:(id)arg0 forKey:(unk)arg1  ;
+(void)resetAndApplySettings:(id)arg0 toObject:(id)arg1 withResolution:(id)arg2 ;
+(void)resetObject:(id)arg0 notRespondingToSettingsKeys:(id)arg1 withResolution:(id)arg2 ;
+(void)resetObject:(id)arg0 respondingToSettingsKeys:(id)arg1 withResolution:(id)arg2 ;
+(void)resetObject:(id)arg0 withResolution:(id)arg1 ;
-(BOOL)hasPendingTransaction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)pendingTransaction;
-(void)beginTransaction;
-(void)commitTransaction;
-(void)dealloc;
// -(void)registerUpdateBlock:(id)arg0 forKey:(unk)arg1  ;


@end


#endif