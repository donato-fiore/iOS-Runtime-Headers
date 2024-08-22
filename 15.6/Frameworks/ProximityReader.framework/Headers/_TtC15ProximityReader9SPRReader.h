// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15PROXIMITYREADER9SPRREADER_H
#define _TTC15PROXIMITYREADER9SPRREADER_H

@class SwiftObject;
@protocol SPRReadDelegate;



@interface _TtC15ProximityReader9SPRReader : SwiftObject <SPRReadDelegate>

 {
    ? merchantIds;
    ? readerUpdateManager;
    ? retryHandler;
    ? eventListener;
    ? cancelListener;
}




-(void)onFailureWithError:(id)arg0 ;
-(void)onSuccessWithTransactionData:(id)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 mode:(NSInteger)arg1 ;


@end


#endif