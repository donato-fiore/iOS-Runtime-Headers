// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPGSVSECTIONHEADERCONTEXT_H
#define PKPGSVSECTIONHEADERCONTEXT_H

@class UIView<PKPGSVSectionHeaderView>, UIView<PKPGSVSectionSubheaderView>;

#import <Foundation/Foundation.h>


@interface PKPGSVSectionHeaderContext : NSObject

@property (readonly, nonatomic) CGFloat headerHeight;
@property (nonatomic) UIEdgeInsets headerMargins; // ivar: _headerMargins
@property (readonly, nonatomic) UIView<PKPGSVSectionHeaderView> *headerView; // ivar: _headerView
@property (nonatomic) UIEdgeInsets subheaderMargins; // ivar: _subheaderMargins
@property (readonly, nonatomic) UIView<PKPGSVSectionSubheaderView> *subheaderView; // ivar: _subheaderView
@property (readonly, nonatomic) CGFloat totalHeight;


+(id)createUpdatedHeaderContextForGroupStackView:(id)arg0 passType:(NSUInteger)arg1 currentContext:(id)arg2 allowHeader:(BOOL)arg3 allowSubheader:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithHeaderView:(id)arg0 headerMargins:(struct UIEdgeInsets )arg1 subheaderView:(id)arg2 subheaderMargins:(struct UIEdgeInsets )arg3 ;
-(struct CGPoint )positionForHeaderViewInContainerFrame:(struct CGRect )arg0 ;
-(struct CGPoint )positionForSubheaderViewInContainerFrame:(struct CGRect )arg0 ;
-(struct CGRect )boundsForHeaderViewInContainerFrame:(struct CGRect )arg0 ;
-(struct CGRect )boundsForSubheaderViewInContainerFrame:(struct CGRect )arg0 ;
-(void)dealloc;


@end


#endif