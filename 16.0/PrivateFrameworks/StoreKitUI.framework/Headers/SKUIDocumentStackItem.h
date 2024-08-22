// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIDOCUMENTSTACKITEM_H
#define SKUIDOCUMENTSTACKITEM_H

@class IKAppDocument, NSString, UIPopoverPresentationController, NSDictionary, UIViewController;

#import <Foundation/Foundation.h>

#import "SKUINavigationDocumentController.h"

@interface SKUIDocumentStackItem : NSObject

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) IKAppDocument *document; // ivar: _document
@property (retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // ivar: _navigationDocumentController
@property (readonly, nonatomic) NSString *overlayType;
@property (retain, nonatomic) UIPopoverPresentationController *popoverPresentationController; // ivar: _popoverPresentationController
@property (readonly, nonatomic) NSDictionary *presentationOptions; // ivar: _presentationOptions
@property (readonly, nonatomic) NSString *presentationType;
@property (readonly, nonatomic) NSString *sheetType;
@property (readonly, nonatomic) NSString *sourceElementIdentifier;
@property (nonatomic) BOOL usesNavigationControllerForModalPresentation; // ivar: _usesNavigationControllerForModalPresentation
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)init;
-(id)initWithDocument:(id)arg0 presentationOptions:(id)arg1 ;


@end


#endif