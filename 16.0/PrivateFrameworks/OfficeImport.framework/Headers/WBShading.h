// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHADING_H
#define WBSHADING_H


#import <Foundation/Foundation.h>


@interface WBShading : NSObject



+(struct CsColour )fixedUpVersionOfColor:(struct CsColour )arg0 ;
+(void)readFrom:(struct WrdShading *)arg0 to:(id)arg1 ;
+(void)setToSolidWhite:(id)arg0 ;
+(void)write:(id)arg0 to:(struct WrdShading *)arg1 ;


@end


#endif