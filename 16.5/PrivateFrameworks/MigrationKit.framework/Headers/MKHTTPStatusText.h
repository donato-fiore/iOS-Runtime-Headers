// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKHTTPSTATUSTEXT_H
#define MKHTTPSTATUSTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MKHTTPStatusText : NSObject {
    NSDictionary *_statusTexts;
}




+(id)sharedInstance;
+(id)statusText:(NSUInteger)arg0 ;
-(id)init;
-(id)statusText:(NSUInteger)arg0 ;


@end


#endif