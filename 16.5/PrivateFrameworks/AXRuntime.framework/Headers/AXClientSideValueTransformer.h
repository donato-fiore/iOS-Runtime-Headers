// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXCLIENTSIDEVALUETRANSFORMER_H
#define AXCLIENTSIDEVALUETRANSFORMER_H


#import <Foundation/Foundation.h>


@interface AXClientSideValueTransformer : NSObject



+(BOOL)canTransformAttribute:(NSInteger)arg0 ;
+(Class)transformer;
+(id)_transformArrayWithUserStrings:(id)arg0 ;
+(id)_transformAutomationDictionary:(id)arg0 ;
+(id)_transformUserString:(id)arg0 ;
+(id)transformValue:(id)arg0 forAttribute:(NSInteger)arg1 withElement:(struct __AXUIElement *)arg2 ;


@end


#endif