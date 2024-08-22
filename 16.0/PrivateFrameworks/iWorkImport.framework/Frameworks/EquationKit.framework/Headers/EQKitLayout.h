// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITLAYOUT_H
#define EQKITLAYOUT_H

@class NSString;
@protocol EQKitLayout, EQKitRootNode;

#import <Foundation/Foundation.h>

#import "EQKitEnvironmentInstance.h"
#import "EQKitBox.h"

@interface EQKitLayout : NSObject <EQKitLayout>

 {
    id<EQKitRootNode> *mRoot;
    CGFloat mAscent;
    CGFloat mDescent;
    CGFloat mLeading;
    CGFloat mNaturalAlignmentOffset;
    CGFloat mScale;
    BOOL mSingleLineHeight;
    EQKitEnvironmentInstance *mEnvironment;
}


@property (readonly, nonatomic) EQKitBox *box; // ivar: mBox
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)layoutWithContext:(id)arg0 ;
-(CGFloat)depth;
-(CGFloat)height;
-(CGFloat)naturalAlignmentOffset;
-(CGFloat)vsize;
-(CGFloat)width;
-(id)init;
-(id)initWithRoot:(id)arg0 environment:(id)arg1 ;
-(struct CGRect )erasableBounds;
-(struct CGSize )naturalSize;
-(void)dealloc;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif