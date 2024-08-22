// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLACTIVECALLVIEW_H
#define SLACTIVECALLVIEW_H

@class UIView;
@protocol SLActiveCallViewDelegateSwift, SLActiveCallViewDelegate;


#import "SLActiveCallViewSwift.h"

@interface SLActiveCallView : UIView <SLActiveCallViewDelegateSwift>



@property (weak, nonatomic) NSObject<SLActiveCallViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasActiveCall;
@property (nonatomic) CGFloat maxWidth;
@property (readonly, nonatomic) BOOL remoteContentIsLoaded;
@property (nonatomic) BOOL remoteRenderingEnabled;
@property (retain, nonatomic) SLActiveCallViewSwift *representedObject; // ivar: _representedObject


-(id)init;
-(id)initWithMaxWidth:(CGFloat)arg0 ;
-(void)activeCallViewDidDetectActiveCallChange:(id)arg0 ;
-(void)activeCallViewDidLoadNewRemoteContent:(id)arg0 ;


@end


#endif