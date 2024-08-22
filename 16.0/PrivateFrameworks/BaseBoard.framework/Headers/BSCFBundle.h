// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSCFBUNDLE_H
#define BSCFBUNDLE_H


#import <Foundation/Foundation.h>


@interface BSCFBundle : NSObject {
    *__CFBundle _cfBundle;
}




-(id)bundleIdentifier;
-(id)bundlePath;
-(id)description;
-(id)executablePath;
-(id)infoDictionary;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)localizedInfoDictionary;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(id)pathForResource:(id)arg0 ofType:(id)arg1 ;
-(id)pathForResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
-(struct __CFBundle *)cfBundle;
-(void)dealloc;


@end


#endif