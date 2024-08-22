// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBFONT_H
#define WBFONT_H


#import <Foundation/Foundation.h>


@interface WBFont : NSObject



+(id)readFrom:(struct WrdFontFamilyName *)arg0 withFontTable:(id)arg1 ;
+(void)write:(id)arg0 to:(struct WrdFontFamilyName *)arg1 ;


@end


#endif