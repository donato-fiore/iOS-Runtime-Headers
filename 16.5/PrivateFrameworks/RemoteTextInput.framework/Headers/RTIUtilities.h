// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIUTILITIES_H
#define RTIUTILITIES_H


#import <Foundation/Foundation.h>


@interface RTIUtilities : NSObject



+(id)_attributedStringWithoutDefaultAttributes:(id)arg0 ;
+(id)_filteredAttributedString:(id)arg0 validAttributes:(id)arg1 ;
+(id)customInfoClassesForType:(id)arg0 forClass:(Class)arg1 ;
+(id)customInfoDictionary;
+(void)registerCustomInfoClasses:(id)arg0 forType:(id)arg1 forClass:(Class)arg2 ;
+(void)unregisterCustomInfoType:(id)arg0 forClass:(Class)arg1 ;


@end


#endif