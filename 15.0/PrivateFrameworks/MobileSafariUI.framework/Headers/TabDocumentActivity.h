// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABDOCUMENTACTIVITY_H
#define TABDOCUMENTACTIVITY_H

@class SFActivity;


#import "TabDocument.h"

@interface TabDocumentActivity : SFActivity

@property (readonly, nonatomic) BOOL canPerformOnNewTabPage;
@property (readonly, nonatomic) TabDocument *tabDocument; // ivar: _tabDocument


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)canPerformWithTabDocument:(id)arg0 ;
-(id)_activityImage;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityImageWithTabDocument:(id)arg0 ;
-(id)activityTitle;
-(id)activityTitleWithTabDocument:(id)arg0 ;
-(id)embeddedActivityViewControllerWithTabDocument:(id)arg0 ;
-(id)systemImageNameWithTabDocument:(id)arg0 ;
-(void)_prepareWithActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)performActivity;
-(void)performActivityWithTabDocument:(id)arg0 ;
-(void)prepareWithTabDocument:(id)arg0 ;
-(void)prepareWithTabDocument:(id)arg0 completion:(id)arg1 ;


@end


#endif