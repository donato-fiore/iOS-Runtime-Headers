// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDIAGNOSTICSPOSTERFRAMECOLLECTIONVIEWCELL_H
#define HUDIAGNOSTICSPOSTERFRAMECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSOperationQueue, UIImageView, UILabel;



@interface HUDiagnosticsPosterFrameCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) NSOperationQueue *diagnosticOperationQueue; // ivar: _diagnosticOperationQueue
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateHeroFrameWithCameraClip:(id)arg0 clipManager:(id)arg1 ;
-(void)updateWithPosterFrame:(id)arg0 cameraClip:(id)arg1 clipManager:(id)arg2 ;


@end


#endif