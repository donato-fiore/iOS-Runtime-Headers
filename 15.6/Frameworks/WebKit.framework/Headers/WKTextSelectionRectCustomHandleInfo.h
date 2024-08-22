// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKTEXTSELECTIONRECTCUSTOMHANDLEINFO_H
#define WKTEXTSELECTIONRECTCUSTOMHANDLEINFO_H

@class UITextSelectionRectCustomHandleInfo;



@interface WKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo {
    FloatQuad _quad;
}




-(id)initWithFloatQuad:(struct FloatQuad *)arg0 ;
-(struct CGPoint )bottomLeft;
-(struct CGPoint )bottomRight;
-(struct CGPoint )topLeft;
-(struct CGPoint )topRight;


@end


#endif