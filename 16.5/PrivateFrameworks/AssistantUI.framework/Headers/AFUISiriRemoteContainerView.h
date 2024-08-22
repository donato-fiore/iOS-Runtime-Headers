// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUISIRIREMOTECONTAINERVIEW_H
#define AFUISIRIREMOTECONTAINERVIEW_H

@class UIView, NSString;
@protocol AFUISiriRemoteViewHosting;



@interface AFUISiriRemoteContainerView : UIView <AFUISiriRemoteViewHosting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *remoteContentView; // ivar: _remoteContentView
@property (readonly) Class superclass;


-(void)layoutSubviews;


@end


#endif