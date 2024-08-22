// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFAULTHANDLER_H
#define NSFAULTHANDLER_H


#import <Foundation/Foundation.h>


@interface NSFaultHandler : NSObject



+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(id)fulfillFault:(id)arg0 withContext:(id)arg1 forIndex:(NSUInteger)arg2 ;


@end


#endif