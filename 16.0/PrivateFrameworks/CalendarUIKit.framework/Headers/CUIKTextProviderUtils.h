// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKTEXTPROVIDERUTILS_H
#define CUIKTEXTPROVIDERUTILS_H


#import <Foundation/Foundation.h>


@interface CUIKTextProviderUtils : NSObject



+(BOOL)designatorRequiresWhitespace;
+(BOOL)dropLeftRedundantDesignator;
+(BOOL)smallCapsAllowed;
+(id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg0 designatorRequiresWhitespace:(BOOL)arg1 ;


@end


#endif