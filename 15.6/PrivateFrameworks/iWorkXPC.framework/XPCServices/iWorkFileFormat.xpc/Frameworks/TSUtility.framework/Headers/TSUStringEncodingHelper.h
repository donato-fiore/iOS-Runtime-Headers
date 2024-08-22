// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUSTRINGENCODINGHELPER_H
#define TSUSTRINGENCODINGHELPER_H


#import <Foundation/Foundation.h>


@interface TSUStringEncodingHelper : NSObject



+(NSUInteger)encodingForLocalizedName:(id)arg0 ;
+(id)localizedEncodingNames;
+(id)localizedNameOfStringEncoding:(NSUInteger)arg0 ;
+(id)p_fallbackNameForEncoding:(NSUInteger)arg0 ;
+(void)p_initializeEncodings;


@end


#endif