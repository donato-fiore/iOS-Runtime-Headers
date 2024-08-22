// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT16AUDISTORTIONVIEW_H
#define _TTC12COREAUDIOKIT16AUDISTORTIONVIEW_H

@class UIView, AUAudioUnit;
@protocol UICollectionViewDelegate, _TtP12CoreAudioKit27CAAUViewParameterDataSource_;



@interface _TtC12CoreAudioKit16AUDistortionView : UIView <UICollectionViewDelegate>

 {
    ? distortionSectionViewCount;
    ? dataSource;
    ? collectionView;
    ? delaySectionCellRegistration;
    ? ringModSectionCellRegistration;
    ? decimationSectionCellRegistration;
    ? overdriveSectionCellRegistration;
    ? globalSectionCellRegistration;
}


@property (nonatomic, retain) AUAudioUnit *auAudioUnit; // ivar: auAudioUnit
@property (nonatomic) CGRect bounds;
@property (nonatomic, retain) NSObject<_TtP12CoreAudioKit27CAAUViewParameterDataSource_> *parameterDataSource; // ivar: parameterDataSource


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)removeFromSuperview;
-(void)setWithParameter:(unsigned int)arg0 value:(float)arg1 ;


@end


#endif