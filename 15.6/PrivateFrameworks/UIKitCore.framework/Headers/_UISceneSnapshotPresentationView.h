// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCENESNAPSHOTPRESENTATIONVIEW_H
#define _UISCENESNAPSHOTPRESENTATIONVIEW_H

@class NSString, FBSceneSnapshot;
@protocol UISceneSnapshotPresentation;


#import "UIView.h"

@interface _UISceneSnapshotPresentationView : UIView <UISceneSnapshotPresentation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FBSceneSnapshot *sceneSnapshot; // ivar: _snapshot
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSnapshot:(id)arg0 ;


@end


#endif