// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPDFWIDGET_H
#define UIPDFWIDGET_H

@class UIView, NSTimer, UILabel, NSMutableSet;


#import "UIPDFDocument.h"

@interface UIPDFWidget : UIView {
    int queueIndex;
    int queueCount;
    ? queueData;
    int currentPageCount;
    int totalPageCount;
    int renderJobsCount;
    NSTimer *heartbeatTimer;
    UILabel *infoLabel;
    UIPDFDocument *activeDocument;
    NSMutableSet *trackedPages;
}




-(id)initWithFrame:(struct CGRect )arg0 withDocument:(id)arg1 ;
-(void)addedPageView:(int)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)heartbeat;
-(void)removedPageView:(int)arg0 ;


@end


#endif