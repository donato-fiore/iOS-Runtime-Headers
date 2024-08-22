// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGRTCLOGGINGGUARDEDDATA_H
#define SGRTCLOGGINGGUARDEDDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SGRTCLoggingGuardedData : NSObject {
    NSMutableArray *_loggedExtractions;
    NSMutableArray *_loggedInteractions;
    NSMutableArray *_loggedInteractionsSummary;
    CGFloat _storeCreationDate;
}






@end


#endif