// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPOINTOFINTERESTCLUSTERVIEW_H
#define CPSPOINTOFINTERESTCLUSTERVIEW_H

@class MKMarkerAnnotationView;



@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView



-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configure;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setAnnotation:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)update;


@end


#endif