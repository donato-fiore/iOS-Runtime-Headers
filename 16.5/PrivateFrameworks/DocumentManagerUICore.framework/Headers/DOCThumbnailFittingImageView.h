// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTHUMBNAILFITTINGIMAGEVIEW_H
#define DOCTHUMBNAILFITTINGIMAGEVIEW_H

@class NSURL;
@protocol DOCNode;


#import "DOCBorderedFittingImageView.h"

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView

@property (nonatomic) NSInteger generatorGeneration; // ivar: _generatorGeneration
@property (readonly, nonatomic) NSObject<DOCNode> *node; // ivar: _node
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 node:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 url:(id)arg1 ;
-(void)_commonInitWithSize:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateThumbnail;
-(void)updateThumbnailForNode:(id)arg0 ;
-(void)updateThumbnailForURL:(id)arg0 ;


@end


#endif