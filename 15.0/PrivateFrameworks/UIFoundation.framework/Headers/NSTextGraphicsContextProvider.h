// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTGRAPHICSCONTEXTPROVIDER_H
#define NSTEXTGRAPHICSCONTEXTPROVIDER_H


#import <Foundation/Foundation.h>


@interface NSTextGraphicsContextProvider : NSObject



+(BOOL)textGraphicsContextProviderClassRespondsToColorQuery;
+(Class)__defaultColorClass;
+(Class)textGraphicsContextClass;
+(Class)textGraphicsContextProviderClass;
+(void)setCurrentTextGraphicsContext:(id)arg0 duringBlock:(id)arg1 ;
+(void)setTextGraphicsContextClass:(Class)arg0 ;
+(void)setTextGraphicsContextProviderClass:(Class)arg0 ;


@end


#endif