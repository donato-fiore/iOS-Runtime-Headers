// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSFORMATARGUMENT_H
#define TTSFORMATARGUMENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface TTSFormatArgument : NSObject {
    NSString *formatSpecifier;
    NSDictionary *attributes;
    NSString *formattedArg;
}




-(void)dealloc;


@end


#endif