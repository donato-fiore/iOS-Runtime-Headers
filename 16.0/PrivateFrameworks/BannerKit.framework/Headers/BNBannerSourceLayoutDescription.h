// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNBANNERSOURCELAYOUTDESCRIPTION_H
#define BNBANNERSOURCELAYOUTDESCRIPTION_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface BNBannerSourceLayoutDescription : NSObject <BSXPCSecureCoding>



@property (readonly, nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat offsetFromPresentationEdge; // ivar: _offsetFromPresentationEdge
@property (readonly, nonatomic) CGSize presentationSize; // ivar: _presentationSize
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(id)bannerSourceLayoutDescriptionWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
+(id)bannerSourceLayoutDescriptionWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 offsetFromPresentationEdge:(CGFloat)arg2 ;
-(id)_initWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 offsetFromPresentationEdge:(CGFloat)arg2 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif