// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCAPPOFFERSTATEDELEGATEPROXY_H
#define ASCAPPOFFERSTATEDELEGATEPROXY_H

@class NSString;
@protocol ASCAppOfferStateDelegate;

#import <Foundation/Foundation.h>


@interface ASCAppOfferStateDelegateProxy : NSObject <ASCAppOfferStateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<ASCAppOfferStateDelegate> *target; // ivar: _target


-(id)initWithTarget:(id)arg0 ;
-(void)offer:(id)arg0 didChangeState:(id)arg1 withMetadata:(id)arg2 flags:(NSInteger)arg3 ;
-(void)offer:(id)arg0 didChangeStatusText:(id)arg1 ;


@end


#endif