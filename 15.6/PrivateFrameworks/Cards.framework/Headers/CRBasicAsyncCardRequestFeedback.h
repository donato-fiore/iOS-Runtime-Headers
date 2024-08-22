// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRBASICASYNCCARDREQUESTFEEDBACK_H
#define CRBASICASYNCCARDREQUESTFEEDBACK_H

@class SFFeedback, NSString;
@protocol CRAsyncCardRequestFeedback, CRCard;

#import <Foundation/Foundation.h>


@interface CRBasicAsyncCardRequestFeedback : NSObject <CRAsyncCardRequestFeedback>



@property (readonly, nonatomic) SFFeedback *backingFeedback;
@property (retain, nonatomic) NSObject<CRCard> *baseCard; // ivar: baseCard
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CRCard> *requestedCard; // ivar: requestedCard
@property (readonly) Class superclass;




@end


#endif