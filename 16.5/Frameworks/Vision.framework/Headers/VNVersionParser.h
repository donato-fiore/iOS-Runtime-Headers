// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNVERSIONPARSER_H
#define VNVERSIONPARSER_H


#import <Foundation/Foundation.h>


@interface VNVersionParser : NSObject



+(BOOL)_isSeparatedString:(id)arg0 equalToString:(id)arg1 atIndex:(NSUInteger)arg2 usingSeparator:(id)arg3 ;
+(BOOL)isMajorVersion:(id)arg0 equalToMajorVersion:(id)arg1 ;
+(BOOL)isMinorVersion:(id)arg0 equalToMinorVersion:(id)arg1 ;


@end


#endif