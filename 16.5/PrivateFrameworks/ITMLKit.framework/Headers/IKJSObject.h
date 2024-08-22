// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSOBJECT_H
#define IKJSOBJECT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"

@interface IKJSObject : NSObject

@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSMutableDictionary *managedProperties; // ivar: _managedProperties


+(void)initialize;
-(id)init;
-(id)initWithAppContext:(id)arg0 ;
-(id)invokeMethod:(id)arg0 withArguments:(id)arg1 ;
-(id)jsValueForProperty:(id)arg0 ;
-(void)setJSValue:(id)arg0 forProperty:(id)arg1 ;


@end


#endif