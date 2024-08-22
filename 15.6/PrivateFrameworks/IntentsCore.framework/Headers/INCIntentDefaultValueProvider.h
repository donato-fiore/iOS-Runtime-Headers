// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCINTENTDEFAULTVALUEPROVIDER_H
#define INCINTENTDEFAULTVALUEPROVIDER_H

@class INIntent;

#import <Foundation/Foundation.h>


@interface INCIntentDefaultValueProvider : NSObject

@property (readonly, copy, nonatomic) INIntent *intent; // ivar: _intent


-(BOOL)isExpectedDefaultValueError:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(void)loadDefaultValuesWithAttributes:(id)arg0 extensionProxy:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadDefaultValuesWithCompletionHandler:(id)arg0 ;


@end


#endif