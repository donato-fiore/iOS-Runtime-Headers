// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICTEXTCONTAINER_H
#define ICTEXTCONTAINER_H

@class NSTextContainer;



@interface ICTextContainer : NSTextContainer

@property (nonatomic) BOOL inPreviewMode; // ivar: _inPreviewMode


-(BOOL)isSimpleRectangularTextContainer;
-(struct CGRect )lineFragmentRectForProposedRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 writingDirection:(NSInteger)arg2 remainingRect:(struct CGRect *)arg3 ;


@end


#endif