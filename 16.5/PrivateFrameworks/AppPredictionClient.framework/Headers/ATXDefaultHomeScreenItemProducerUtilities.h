// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTHOMESCREENITEMPRODUCERUTILITIES_H
#define ATXDEFAULTHOMESCREENITEMPRODUCERUTILITIES_H


#import <Foundation/Foundation.h>


@interface ATXDefaultHomeScreenItemProducerUtilities : NSObject



+(BOOL)_isSpecialAvocadoDescriptor:(id)arg0 ;
+(NSUInteger)_supportedSizeClassesForSpecialAvocadoKind:(id)arg0 ;
+(NSUInteger)_widgetFamilyMaskForStackLayoutSize:(NSUInteger)arg0 ;
+(id)_defaultWidgetStackFromSmallStack:(id)arg0 mediumStack:(id)arg1 largeStack:(id)arg2 extraLargeStack:(id)arg3 suggestedSize:(NSUInteger)arg4 maxWidgetsPerStack:(NSUInteger)arg5 isiPad:(BOOL)arg6 ;
+(id)_specialAvocadoKindsConvertingFromAssetsString:(id)arg0 ;
+(id)defaultWidgetStackFromSmallStack:(id)arg0 mediumStack:(id)arg1 largeStack:(id)arg2 extraLargeStack:(id)arg3 suggestedSize:(NSUInteger)arg4 maxWidgetsPerStack:(NSUInteger)arg5 isiPad:(BOOL)arg6 ;
+(id)personalitiesFromAssetsWithKey:(id)arg0 ;
+(id)specialWidgetDescriptorForPersonality:(id)arg0 size:(NSUInteger)arg1 ;
+(id)splitDescriptorsIntoFirstPartyAndThirdParty:(id)arg0 ;
+(id)stackFromDefaultStackPersonalities:(id)arg0 suggestedSize:(NSUInteger)arg1 maxWidgetsPerStack:(NSUInteger)arg2 personalityToDescriptorDictionary:(id)arg3 isiPad:(BOOL)arg4 ;
+(id)widget:(id)arg0 filteredForSize:(NSUInteger)arg1 ;
+(id)widgetDescriptorFromChronoDescriptor:(id)arg0 appBundleId:(id)arg1 rankType:(NSInteger)arg2 ;
+(id)widgetFromPersonality:(id)arg0 size:(NSUInteger)arg1 personalityToDescriptorDictionary:(id)arg2 ;
+(id)widgets:(id)arg0 filteredForSize:(NSUInteger)arg1 ;
+(id)widgetsFromPersonalities:(id)arg0 size:(NSUInteger)arg1 personalityToDescriptorDictionary:(id)arg2 ;


@end


#endif