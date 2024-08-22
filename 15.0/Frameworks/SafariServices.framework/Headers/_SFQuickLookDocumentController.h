// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFQUICKLOOKDOCUMENTCONTROLLER_H
#define _SFQUICKLOOKDOCUMENTCONTROLLER_H

@class NSArray, UIDocumentInteractionController, NSString, UIView;
@protocol _SFQuickLookDocumentViewDelegate;

#import <Foundation/Foundation.h>

#import "_SFQuickLookDocument.h"

@interface _SFQuickLookDocumentController : NSObject <_SFQuickLookDocumentViewDelegate>

 {
    NSArray *_buttonActions;
    UIDocumentInteractionController *_documentInteractionController;
    _SFQuickLookDocument *_quickLookDocument;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *documentView; // ivar: _documentView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)dataOwnerForQuickLookDocumentView:(id)arg0 ;
-(id)_actionTitleForType:(NSInteger)arg0 withActionCount:(NSUInteger)arg1 ;
-(id)_supportedApplications;
-(id)init;
-(id)itemProviderForQuickLookDocumentView:(id)arg0 ;
-(void)_updateActionButtons;
-(void)presentDocumentInteractionControllerFromSource:(id)arg0 ;
-(void)quickLookDocumentView:(id)arg0 didSelectActionAtIndex:(NSInteger)arg1 ;
-(void)updateWithQuickLookDocument:(id)arg0 ;


@end


#endif