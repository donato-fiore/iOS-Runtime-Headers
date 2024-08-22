// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSMARTPUNCTUATIONCONTROLLER_H
#define NSSMARTPUNCTUATIONCONTROLLER_H

@protocol NSSmartPunctuationClient;

#import <Foundation/Foundation.h>

#import "NSSmartQuoteOptions.h"

@interface NSSmartPunctuationController : NSObject {
    id<NSSmartPunctuationClient> *_client;
    NSSmartQuoteOptions *_options;
    NSUInteger _types;
}


@property NSObject<NSSmartPunctuationClient> *client;
@property BOOL smartDashesEnabled;
@property (copy) NSSmartQuoteOptions *smartQuoteOptions;
@property BOOL smartQuotesEnabled;


-(id)init;
-(void)clientDidReplaceRange:(struct _NSRange )arg0 changeInLength:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif