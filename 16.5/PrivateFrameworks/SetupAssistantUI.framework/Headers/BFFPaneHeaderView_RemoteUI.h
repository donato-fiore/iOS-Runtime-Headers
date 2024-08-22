// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFPANEHEADERVIEW_REMOTEUI_H
#define BFFPANEHEADERVIEW_REMOTEUI_H

@class NSString;
@protocol RUIHeader, RUIHeaderDelegate;


#import "BFFPaneHeaderView.h"

@interface BFFPaneHeaderView_RemoteUI : BFFPaneHeaderView <RUIHeader>

 {
    id<RUIHeaderDelegate> *_rui_headerDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)headerHeightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(id)headerLabel;
-(id)initWithAttributes:(id)arg0 ;
-(id)subHeaderLabel;
-(void)setDelegate:(id)arg0 ;
-(void)setDetailText:(id)arg0 attributes:(id)arg1 ;
-(void)setIconImage:(id)arg0 ;
-(void)setImageAlignment:(int)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)setSubHeaderText:(id)arg0 attributes:(id)arg1 ;
-(void)setText:(id)arg0 attributes:(id)arg1 ;


@end


#endif