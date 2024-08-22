// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTTANGIERATTACHMENTLAYOUT_H
#define SXTEXTTANGIERATTACHMENTLAYOUT_H

@class TSDDrawableLayout, TSDWrapPolygon;



@interface SXTextTangierAttachmentLayout : TSDDrawableLayout

@property (retain, nonatomic) TSDWrapPolygon *polygon; // ivar: _polygon


-(id)wrapPolygon;
-(struct CGRect )boundsInRoot;
-(struct CGRect )boundsInfluencingExteriorWrap;
-(void)fixTransformFromInterimPosition;
-(void)storeActualPosition;
-(void)validate;


@end


#endif