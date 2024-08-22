// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLMACROTEXT_H
#define TMLMACROTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMLMacroText : NSObject

@property (retain, nonatomic) NSString *basePath; // ivar: basePath
@property (retain, nonatomic) NSString *filename; // ivar: filename
@property (retain, nonatomic) NSString *macroText; // ivar: macroText


+(id)macroTextWithMacroText:(id)arg0 basePath:(id)arg1 filename:(id)arg2 ;


@end


#endif