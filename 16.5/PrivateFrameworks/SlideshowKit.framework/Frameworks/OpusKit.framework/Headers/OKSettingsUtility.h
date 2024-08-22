// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKSETTINGSUTILITY_H
#define OKSETTINGSUTILITY_H


#import <Foundation/Foundation.h>


@interface OKSettingsUtility : NSObject



+(id)_settingObjectForKey:(id)arg0 settings:(id)arg1 resolution:(id)arg2 ;
+(id)arrayFromObject:(id)arg0 type:(NSUInteger)arg1 ;
+(id)arrayOfDictionaryFromObject:(id)arg0 ;
+(id)arrayOfDynamicSettingsObjectsFromObject:(id)arg0 class:(Class)arg1 resolution:(id)arg2 ;
+(id)arrayOfSettingsObjectsFromObject:(id)arg0 class:(Class)arg1 resolution:(id)arg2 ;
+(id)arrayOfStringFromObject:(id)arg0 ;
+(id)arrayOfURLFromObject:(id)arg0 ;
+(id)arrayOfWidgetFromObject:(id)arg0 ;
+(id)attributedStringFromObject:(id)arg0 ;
+(id)colorFromObject:(id)arg0 ;
+(id)dictionaryFromObject:(id)arg0 type:(NSUInteger)arg1 ;
+(id)dictionaryOfArrayFromObject:(id)arg0 ;
+(id)dictionaryOfDictionaryFromObject:(id)arg0 ;
+(id)dictionaryOfDynamicSettingsObjectsFromObject:(id)arg0 class:(Class)arg1 resolution:(id)arg2 ;
+(id)dictionaryOfSettingsObjectsFromObject:(id)arg0 class:(Class)arg1 resolution:(id)arg2 ;
+(id)dynamicSettingsObjectFromObject:(id)arg0 class:(Class)arg1 resolution:(id)arg2 ;
+(id)enumFromObject:(id)arg0 mapping:(id)arg1 ;
+(id)indexPath2DFromObject:(id)arg0 ;
+(id)normalizedObjectFromValue:(id)arg0 ;
+(id)numberFromObject:(id)arg0 ;
+(id)optionsFromObject:(id)arg0 mapping:(id)arg1 ;
+(id)settingsObjectFromObject:(id)arg0 class:(Class)arg1 resolution:(id)arg2 ;
+(id)stringFromObject:(id)arg0 ;
+(id)urlFromObject:(id)arg0 ;
+(id)valueForKey:(id)arg0 ofType:(NSUInteger)arg1 settings:(id)arg2 optionalSubType:(NSUInteger)arg3 optionalClass:(Class)arg4 optionalMapping:(id)arg5 resolution:(id)arg6 ;
+(id)valueForObject:(id)arg0 ofType:(NSUInteger)arg1 optionalSubType:(NSUInteger)arg2 optionalClass:(Class)arg3 optionalMapping:(id)arg4 resolution:(id)arg5 ;
+(id)widgetFromObject:(id)arg0 ;
+(struct ? )coordinateRegionFromObject:(id)arg0 ;
+(struct CGPoint )pointFromObject:(id)arg0 ;
+(struct CGRect )rectFromObject:(id)arg0 ;
+(struct CGSize )sizeFromObject:(id)arg0 ;
+(struct CLLocationCoordinate2D )coordinateLocationFromObject:(id)arg0 ;
+(struct UIEdgeInsets )edgeInsetsFromObject:(id)arg0 ;
+(struct UIOffset )offsetFromObject:(id)arg0 ;


@end


#endif