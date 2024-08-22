// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICAPACKAGEVIEW_H
#define _UICAPACKAGEVIEW_H

@class CAPackage, NSArray;


#import "UIView.h"

@interface _UICAPackageView : UIView {
    CAPackage *_package;
    NSArray *_rootViews;
}




+(BOOL)_shouldCatchDecodingExceptions;
+(id)_newViewHierarchyFrom:(id)arg0 publishedObjectViewClassMap:(id)arg1 into:(id)arg2 ;
+(void)loadPackageViewWithContentsOfURL:(id)arg0 publishedObjectViewClassMap:(id)arg1 completion:(id)arg2 ;
+(void)loadPackageViewWithData:(id)arg0 publishedObjectViewClassMap:(id)arg1 completion:(id)arg2 ;
+(void)loadPackageViewWithObject:(id)arg0 publishedObjectViewClassMap:(id)arg1 completion:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 publishedObjectViewClassMap:(id)arg1 ;
-(id)initWithData:(id)arg0 publishedObjectViewClassMap:(id)arg1 ;
-(id)publishedObjectWithName:(id)arg0 ;
-(id)publishedViewWithName:(id)arg0 ;


@end


#endif