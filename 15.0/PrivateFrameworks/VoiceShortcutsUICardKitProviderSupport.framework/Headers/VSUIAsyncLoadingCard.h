// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSUIASYNCLOADINGCARD_H
#define VSUIASYNCLOADINGCARD_H

@class CRBasicCard;
@protocol CRCard;



@interface VSUIAsyncLoadingCard : CRBasicCard {
    id<CRCard> *_storedCard;
}




-(BOOL)asynchronous;
-(id)initWithCard:(id)arg0 ;
-(void)loadCardWithCompletion:(id)arg0 ;


@end


#endif