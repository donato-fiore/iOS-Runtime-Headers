// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUDOCUMENTSECTIONITEM_H
#define NUDOCUMENTSECTIONITEM_H

@class NSString, UITraitCollection, UIViewController;
@protocol SXDocumentSectionItemProvider, NUDocumentSectionItemHeightProvider;

#import <Foundation/Foundation.h>


@interface NUDocumentSectionItem : NSObject <SXDocumentSectionItemProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NUDocumentSectionItemHeightProvider> *heightProvider; // ivar: _heightProvider
@property (readonly) CGFloat sectionHeight; // ivar: _sectionHeight
@property (readonly) Class superclass;
@property (readonly) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly) UIViewController *viewController; // ivar: _viewController


-(CGFloat)sectionItemHeightForSize:(struct CGSize )arg0 traitCollection:(id)arg1 ;
-(id)initWithViewController:(id)arg0 sectionHeight:(CGFloat)arg1 ;
-(id)sectionItemViewController;


@end


#endif