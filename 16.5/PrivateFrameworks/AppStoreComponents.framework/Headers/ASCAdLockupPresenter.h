// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCADLOCKUPPRESENTER_H
#define ASCADLOCKUPPRESENTER_H

@protocol ASCAdLockupPresenterView;

#import <Foundation/Foundation.h>

#import "ASCLockup.h"

@interface ASCAdLockupPresenter : NSObject

@property (copy, nonatomic) ASCLockup *lockup; // ivar: _lockup
@property (readonly, nonatomic) NSObject<ASCAdLockupPresenterView> *view; // ivar: _view


-(BOOL)shouldDisplayDescriptionForLockup:(id)arg0 ;
-(id)initWithView:(id)arg0 lockupPresenter:(id)arg1 ;
-(void)dealloc;
-(void)lockupPresenterDidChange:(id)arg0 ;
-(void)setAdTransparencyButtonHidden:(BOOL)arg0 ;
-(void)setDeveloperName:(id)arg0 ;
-(void)setEditorsChoice:(BOOL)arg0 ;
-(void)setProductDescription:(id)arg0 ;
-(void)setProductRating:(float)arg0 ;
-(void)setProductRatingBadge:(id)arg0 ;


@end


#endif