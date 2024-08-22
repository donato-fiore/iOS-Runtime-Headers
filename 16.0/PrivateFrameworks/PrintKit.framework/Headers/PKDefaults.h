// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDEFAULTS_H
#define PKDEFAULTS_H


#import <Foundation/Foundation.h>


@interface PKDefaults : NSObject



+(NSInteger)printerLookupWithArray:(id)arg0 withTimeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
+(id)lastUsedPrinters;
+(id)lastUsedPrintersForPhoto:(BOOL)arg0 ;
+(void)addLastUsedPrinter:(id)arg0 duplexMode:(id)arg1 lastUsedSize:(struct CGSize )arg2 ;
+(void)addLastUsedPrinter:(id)arg0 duplexMode:(id)arg1 lastUsedSize:(struct CGSize )arg2 forPhoto:(BOOL)arg3 ;


@end


#endif