// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKTIMETEXTPROVIDER_H
#define CUIKTIMETEXTPROVIDER_H


#import <Foundation/Foundation.h>


@interface CUIKTimeTextProvider : NSObject



+(id)timeAttributedTextWithDate:(id)arg0 calendar:(id)arg1 font:(struct __CTFont *)arg2 ;
+(id)timeAttributedTextWithDate:(id)arg0 calendar:(id)arg1 font:(struct __CTFont *)arg2 designatorRequiresWhitespace:(BOOL)arg3 smallCapsAllowed:(BOOL)arg4 ;


@end


#endif