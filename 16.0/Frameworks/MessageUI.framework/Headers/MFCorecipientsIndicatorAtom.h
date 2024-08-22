// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCORECIPIENTSINDICATORATOM_H
#define MFCORECIPIENTSINDICATORATOM_H

@class NSArray;
@protocol MFCorecipientsIndicatorAtomDelegate;


#import "MFModernAtomView.h"

@interface MFCorecipientsIndicatorAtom : MFModernAtomView {
    BOOL _touchesWereCancelled;
}


@property (weak, nonatomic) NSObject<MFCorecipientsIndicatorAtomDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients


-(id)init;
-(id)initWithRecipients:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif