// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMMAPANNOTATIONGESTURERECOGNIZER_H
#define FMMAPANNOTATIONGESTURERECOGNIZER_H

@class UIGestureRecognizer;
@protocol FMMapAnnotationGestureRecognizerDelegate;



@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer

@property (nonatomic) NSObject<FMMapAnnotationGestureRecognizerDelegate> *touchDelegate; // ivar: _touchDelegate


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)init;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif