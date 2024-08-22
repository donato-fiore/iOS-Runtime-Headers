// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIGVNODE_H
#define CIGVNODE_H

@class GVNode, NSMutableArray;



@interface CIGVNode : GVNode {
    CGRect extent;
    CGSize titleSize;
    CGSize labelSize;
    CGSize imagesSize;
    CGSize roisSize;
    CGSize badgeSize;
    CGSize contentSize;
    NSMutableArray *images;
    NSMutableArray *rois;
}


@property (readonly, nonatomic) CGRect badgeFrame;
@property (nonatomic) int color; // ivar: color
@property (readonly, nonatomic) CGSize contentCornerSize;
@property (readonly, nonatomic) CGRect contentFrame;
@property (readonly, nonatomic) CGSize contentInsertSize;
@property (readonly) CGRect extent;
@property (readonly, nonatomic) *__CFArray images;
@property (readonly, nonatomic) CGRect imagesFrame;
@property (nonatomic) *__CFString label; // ivar: label
@property (readonly, nonatomic) CGRect labelFrame;
@property (readonly, nonatomic) *__CFArray rois;
@property (readonly, nonatomic) CGRect roisFrame;
@property (nonatomic) int shape; // ivar: shape
@property (nonatomic) *__CFString title; // ivar: title
@property (readonly, nonatomic) CGRect titleFrame;


+(struct __CFDictionary *)textAttributesForLabel;
+(struct __CFDictionary *)textAttributesForTitle;
-(id)description;
-(id)init;
-(id)initWithCINode:(*void)arg0 extent:(struct CGRect )arg1 ;
-(void)addImage:(struct CGImage *)arg0 ;
-(void)addRoi:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)updateBadgeSize;
-(void)updateContentSize;
-(void)updateSize;


@end


#endif