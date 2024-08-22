// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUITOGGLEMODULE_H
#define CCUITOGGLEMODULE_H

@class NSHashTable, UIViewController<CCUIContentModuleBackgroundViewController>, UIViewController<CCUIContentModuleContentViewController>, NSString, UIImage, UIColor;
@protocol CCUIContentModule;

#import <Foundation/Foundation.h>

#import "CCUIContentModuleContext.h"
#import "CCUICAPackageDescription.h"

@interface CCUIToggleModule : NSObject <CCUIContentModule>

 {
    NSHashTable *_contentViewControllers;
}


@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // ivar: _contentModuleContext
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // ivar: _glyphPackageDescription
@property (readonly, nonatomic) CGFloat glyphScale;
@property (readonly, copy, nonatomic) NSString *glyphState;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIImage *iconGlyph;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, copy, nonatomic) UIColor *selectedColor;
@property (readonly, copy, nonatomic) UIImage *selectedIconGlyph;
@property (readonly) Class superclass;


-(id)contentViewControllerForContext:(id)arg0 ;
-(id)glyphPackage;
-(void)reconfigureView;
-(void)refreshState;


@end


#endif