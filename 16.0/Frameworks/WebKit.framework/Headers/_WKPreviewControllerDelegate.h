// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKPREVIEWCONTROLLERDELEGATE_H
#define _WKPREVIEWCONTROLLERDELEGATE_H

@class NSString;
@protocol QLPreviewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _WKPreviewControllerDelegate : NSObject <QLPreviewControllerDelegate>

 {
    *void _previewController;
    IntRect _linkRect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSystemPreviewController:(*void)arg0 ;
-(id)presentingViewController;
-(id)previewController:(id)arg0 transitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2 ;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(void)previewControllerDidDismiss:(id)arg0 ;


@end


#endif