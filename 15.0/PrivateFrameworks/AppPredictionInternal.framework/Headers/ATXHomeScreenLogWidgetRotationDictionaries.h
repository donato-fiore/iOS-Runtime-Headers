// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHOMESCREENLOGWIDGETROTATIONDICTIONARIES_H
#define ATXHOMESCREENLOGWIDGETROTATIONDICTIONARIES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogWidgetRotationDictionaries : NSObject {
    NSMutableDictionary *_widgetRotationDictionaries;
}




+(id)_sourceKeyForWidgetRotationForRotationSession:(id)arg0 ;
+(id)_sourceKeyOfNonProactiveWidgetRotationForReason:(id)arg0 ;
+(id)_suggestionReasonToWidgetRotationDictionariesSourceKey:(int)arg0 ;
+(id)widgetRotationDictionaryAccumulatorKeys;
-(id)_createNewWidgetRotationDictionaryForBundleId:(id)arg0 kind:(id)arg1 size:(NSUInteger)arg2 source:(id)arg3 location:(id)arg4 isNPlusOne:(BOOL)arg5 isFirstRotationToNPlusOne:(BOOL)arg6 ;
-(id)_widgetRotationDictionaryForWidgetBundleId:(id)arg0 kind:(id)arg1 size:(NSUInteger)arg2 source:(id)arg3 location:(id)arg4 isNPlusOne:(BOOL)arg5 isFirstRotationToNPlusOne:(BOOL)arg6 ;
-(id)_widgetRotationDictionaryKeyWithWidgetId:(id)arg0 widgetKind:(id)arg1 widgetSize:(NSUInteger)arg2 source:(id)arg3 location:(id)arg4 isNPlusOne:(BOOL)arg5 isFirstRotationToNPlusOne:(BOOL)arg6 ;
-(id)dryRunResult;
-(id)init;
-(void)sendToCoreAnalytics;
-(void)updateWithRotationSession:(id)arg0 ;


@end


#endif