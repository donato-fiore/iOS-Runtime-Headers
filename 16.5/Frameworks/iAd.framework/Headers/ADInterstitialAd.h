// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADINTERSTITIALAD_H
#define ADINTERSTITIALAD_H


#import <Foundation/Foundation.h>


@interface ADInterstitialAd : NSObject

@property (readonly, nonatomic, getter=isActionInProgress) BOOL actionInProgress; // ivar: _actionInProgress
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded; // ivar: _loaded


-(BOOL)presentInView:(id)arg0 ;
-(void)cancelAction;
-(void)presentFromViewController:(id)arg0 ;


@end


#endif