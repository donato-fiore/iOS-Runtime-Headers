// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSCARDRESPONSE_H
#define CRSCARDRESPONSE_H

@protocol CRCard;


#import "CRSResponse.h"
#import "CRSCardRequest.h"

@interface CRSCardResponse : CRSResponse

@property (retain, nonatomic) NSObject<CRCard> *card; // ivar: _card
@property (retain, nonatomic) CRSCardRequest *request; // ivar: _request




@end


#endif