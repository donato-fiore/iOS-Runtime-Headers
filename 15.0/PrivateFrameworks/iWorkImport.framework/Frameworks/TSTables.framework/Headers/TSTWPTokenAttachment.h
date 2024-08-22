// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTWPTOKENATTACHMENT_H
#define TSTWPTOKENATTACHMENT_H

@class TSWPUIGraphicalAttachment;


#import "TSTExpressionNode.h"

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment {
    CGSize mTextSize;
    CGRect mMenuRect;
    *CGImage mCachedImage;
    BOOL mInInvalidate;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: mActive
@property (nonatomic) *CGImage cachedImage;
@property (nonatomic) CGFloat cachedImageScreenScale; // ivar: mCachedImageScreenScale
@property (retain, nonatomic) TSTExpressionNode *expressionNode; // ivar: mExpressionNode
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: mHighlighted
@property (nonatomic, getter=neverShowsMenu) BOOL neverShowsMenu; // ivar: mNeverShowsMenu
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: mSelected


-(id)copyIntoContext:(id)arg0 ;
-(id)copyIntoContext:(id)arg0 bakeModes:(BOOL)arg1 ;
-(id)description;
-(id)detokenizedText;
-(id)formulaPlainText;
-(id)initWithContext:(id)arg0 expressionNode:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)requestRedraw;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif