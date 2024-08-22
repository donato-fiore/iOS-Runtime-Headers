// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODDPOINTPROPERTYSET_H
#define ODDPOINTPROPERTYSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ODDPointPropertySet : NSObject {
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    BOOL mCustomVerticalFlip;
    CGFloat mCustomScaleX;
    CGFloat mCustomScaleY;
    CGFloat mCustomOffsetX;
    CGFloat mCustomOffsetY;
}




-(BOOL)customVerticalFlip;
-(CGFloat)customOffsetX;
-(CGFloat)customOffsetY;
-(CGFloat)customScaleX;
-(CGFloat)customScaleY;
-(id)description;
-(id)layoutTypeId;
-(id)presentationAssociatedId;
-(id)presentationName;
-(id)presentationStyleLabel;
-(int)presentationStyleCount;
-(int)presentationStyleIndex;
-(void)setCustomOffsetX:(CGFloat)arg0 ;
-(void)setCustomOffsetY:(CGFloat)arg0 ;
-(void)setCustomScaleX:(CGFloat)arg0 ;
-(void)setCustomScaleY:(CGFloat)arg0 ;
-(void)setCustomVerticalFlip:(BOOL)arg0 ;
-(void)setLayoutTypeId:(id)arg0 ;
-(void)setPresentationAssociatedId:(id)arg0 ;
-(void)setPresentationName:(id)arg0 ;
-(void)setPresentationStyleCount:(int)arg0 ;
-(void)setPresentationStyleIndex:(int)arg0 ;
-(void)setPresentationStyleLabel:(id)arg0 ;


@end


#endif