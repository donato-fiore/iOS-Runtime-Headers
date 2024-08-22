// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSVALUETRANSFORMER_H
#define NSVALUETRANSFORMER_H


#import <Foundation/Foundation.h>


@interface NSValueTransformer : NSObject



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
+(id)valueTransformerForName:(id)arg0 ;
+(id)valueTransformerNames;
+(void)setValueTransformer:(id)arg0 forName:(id)arg1 ;
-(id)_initForFoundationOnly;
-(id)init;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif