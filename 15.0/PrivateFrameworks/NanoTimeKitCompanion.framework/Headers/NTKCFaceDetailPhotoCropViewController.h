// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCFACEDETAILPHOTOCROPVIEWCONTROLLER_H
#define NTKCFACEDETAILPHOTOCROPVIEWCONTROLLER_H



#import "NTKCNavigationController.h"
#import "_NTKCFaceDetailPhotoCropViewController.h"
#import "NTKCompanionCustomPhotosEditor.h"
#import "NTKFace.h"
#import "NTKDigitalTimeLabelStyle.h"

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController {
    _NTKCFaceDetailPhotoCropViewController *_implementationVC;
}


@property (readonly, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic) NSUInteger index;
@property (readonly, nonatomic) NTKDigitalTimeLabelStyle *timeStyle;


-(id)initWithIndex:(NSUInteger)arg0 inPhotosEditor:(id)arg1 forFace:(id)arg2 timeStyle:(id)arg3 completionHandler:(id)arg4 ;
-(void)viewDidLoad;


@end


#endif