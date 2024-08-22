// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPAGESETUP_H
#define EDPAGESETUP_H


#import <Foundation/Foundation.h>


@interface EDPageSetup : NSObject {
    int mOrientation;
    int mPageOrder;
    BOOL mCustomFirstPageNumber;
    NSUInteger mFirstPageNumber;
    NSUInteger mFitToHeight;
    NSUInteger mFitToWidth;
    NSUInteger mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}




+(id)pageSetup;
-(BOOL)customFirstPageNumber;
-(NSUInteger)firstPageNumber;
-(NSUInteger)fitToHeight;
-(NSUInteger)fitToWidth;
-(NSUInteger)scale;
-(float)bottomMargin;
-(float)footerMargin;
-(float)headerMargin;
-(float)leftMargin;
-(float)rightMargin;
-(float)topMargin;
-(id)description;
-(id)init;
-(int)order;
-(int)orientation;
-(void)setBottomMargin:(float)arg0 ;
-(void)setCustomFirstPageNumber:(BOOL)arg0 ;
-(void)setFirstPageNumber:(NSUInteger)arg0 ;
-(void)setFitToHeight:(NSUInteger)arg0 ;
-(void)setFitToWidth:(NSUInteger)arg0 ;
-(void)setFooterMargin:(float)arg0 ;
-(void)setHeaderMargin:(float)arg0 ;
-(void)setLeftMargin:(float)arg0 ;
-(void)setOrder:(int)arg0 ;
-(void)setOrientation:(int)arg0 ;
-(void)setRightMargin:(float)arg0 ;
-(void)setScale:(NSUInteger)arg0 ;
-(void)setTopMargin:(float)arg0 ;


@end


#endif