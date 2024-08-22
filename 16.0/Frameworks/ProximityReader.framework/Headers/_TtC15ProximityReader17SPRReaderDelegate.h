// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15PROXIMITYREADER17SPRREADERDELEGATE_H
#define _TTC15PROXIMITYREADER17SPRREADERDELEGATE_H

@class SwiftObject;
@protocol SPRReadDelegate;



@interface _TtC15ProximityReader17SPRReaderDelegate : SwiftObject <SPRReadDelegate>

 {
    ? weakReader;
}




-(void)onFailureWithError:(id)arg0 ;
-(void)onSuccessWithTransactionData:(id)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 mode:(NSInteger)arg1 ;


@end


#endif