// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRBASICASYNCCARDRECEIPTFEEDBACK_H
#define CRBASICASYNCCARDRECEIPTFEEDBACK_H

@class SFFeedback, NSString;
@protocol CRAsyncCardReceiptFeedback, CRCard;

#import <Foundation/Foundation.h>


@interface CRBasicAsyncCardReceiptFeedback : NSObject <CRAsyncCardReceiptFeedback>



@property (readonly, nonatomic) SFFeedback *backingFeedback;
@property (retain, nonatomic) NSObject<CRCard> *baseCard; // ivar: baseCard
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CRCard> *receivedCard; // ivar: receivedCard
@property (retain, nonatomic) NSObject<CRCard> *requestedCard; // ivar: requestedCard
@property (readonly) Class superclass;




@end


#endif