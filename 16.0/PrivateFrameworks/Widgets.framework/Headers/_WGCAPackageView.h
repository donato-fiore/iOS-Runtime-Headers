// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WGCAPACKAGEVIEW_H
#define _WGCAPACKAGEVIEW_H

@class UICAPackageView, NSURL, NSString;



@interface _WGCAPackageView : UICAPackageView

@property (copy, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (readonly, copy, nonatomic) NSString *snapshotIdentifier;


+(void)loadPackageViewWithContentsOfURL:(id)arg0 publishedObjectViewClassMap:(id)arg1 completion:(id)arg2 ;
-(BOOL)_supportsPushingBottomCornerRadiusToSubviews:(CGFloat)arg0 ;
-(id)description;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;


@end


#endif