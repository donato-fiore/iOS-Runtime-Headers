// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTRANSLATIONCONTEXTSNAPSHOT_H
#define WBSTRANSLATIONCONTEXTSNAPSHOT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface WBSTranslationContextSnapshot : NSObject

@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) NSString *targetLocale; // ivar: _targetLocale
@property (retain, nonatomic) NSString *webpageLocale; // ivar: _webpageLocale
@property (retain, nonatomic) NSURL *webpageURL; // ivar: _webpageURL




@end


#endif