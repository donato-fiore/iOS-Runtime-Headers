// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUICANDIDATELINE_H
#define TUICANDIDATELINE_H

@class UICollectionReusableView;
@protocol TUICandidateViewStyle;



@interface TUICandidateLine : UICollectionReusableView

@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style


+(id)reuseIdentifier;


@end


#endif