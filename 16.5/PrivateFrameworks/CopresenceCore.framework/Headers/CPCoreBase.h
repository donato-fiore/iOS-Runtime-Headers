// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPCOREBASE_H
#define CPCOREBASE_H


#import <Foundation/Foundation.h>


@interface CPCoreBase : NSObject



+(id)clientXPCInterface;
+(id)machServiceName;
+(id)serverXPCInterface;
+(void)setClassesForClientXPCInterface:(id)arg0 ;
+(void)setClassesForServerXPCInterface:(id)arg0 ;


@end


#endif