// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCANCELLATIONTOKENSOURCE_H
#define CALCANCELLATIONTOKENSOURCE_H

@class NSString;
@protocol CalCancellationToken;

#import <Foundation/Foundation.h>


@interface CalCancellationTokenSource : NSObject <CalCancellationToken>

 {
    uint8_t _isCancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CalCancellationToken> *token;


-(void)cancel;


@end


#endif