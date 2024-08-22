// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQPREMIUMBUTTON_H
#define ICQPREMIUMBUTTON_H

@class UIButton, ICQLink;



@interface ICQPremiumButton : UIButton

@property (retain, nonatomic) ICQLink *link; // ivar: _link


+(id)buttonWithType:(NSInteger)arg0 link:(id)arg1 ;


@end


#endif