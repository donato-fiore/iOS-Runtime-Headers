// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKITDRAGANDDROPSTATISTICS_H
#define _UIKITDRAGANDDROPSTATISTICS_H


#import <Foundation/Foundation.h>


@interface _UIKitDragAndDropStatistics : NSObject



+(void)incrementUIKitScalarValueBy:(NSInteger)arg0 forKey:(id)arg1 ;
+(void)incrementUIKitScalarValueForKnownInternalAppsForKey:(id)arg0 bundleID:(id)arg1 ;
+(void)recordUIKitDragAndDropDistributionValue:(CGFloat)arg0 forKey:(id)arg1 ;
+(void)setUIKitScalarValue:(NSInteger)arg0 forKey:(id)arg1 ;


@end


#endif