// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FONTPROVIDERMANAGER_H
#define FONTPROVIDERMANAGER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface FontProviderManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)registeredFontsInfo:(BOOL)arg0 ;
+(id)sharedManager;
+(void)registerFonts:(id)arg0 enabled:(BOOL)arg1 completionHandler:(id)arg2 ;
+(void)unregisterFonts:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)normalizeURLs:(id)arg0 ;
-(id)registeredFontsInfo:(BOOL)arg0 ;
-(void)_registerFonts:(id)arg0 enabled:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_unregisterFonts:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif