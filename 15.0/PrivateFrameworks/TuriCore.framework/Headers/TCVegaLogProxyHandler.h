// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCVEGALOGPROXYHANDLER_H
#define TCVEGALOGPROXYHANDLER_H

@protocol TCVegaLogProxyHandling;

#import <Foundation/Foundation.h>


@interface TCVegaLogProxyHandler : NSObject <TCVegaLogProxyHandling>





-(BOOL)setPropertyOnObject:(id)arg0 named:(id)arg1 toValue:(id)arg2 ;
-(id)getPropertyOnObject:(id)arg0 named:(id)arg1 ;


@end


#endif