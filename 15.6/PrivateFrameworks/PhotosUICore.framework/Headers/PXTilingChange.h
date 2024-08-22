// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTILINGCHANGE_H
#define PXTILINGCHANGE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "PXTilingLayout.h"

@interface PXTilingChange : NSObject {
    NSMutableArray *_events;
}


@property (readonly, copy, nonatomic) NSArray *compositionInvalidationContexts; // ivar: _compositionInvalidationContexts
@property (readonly, nonatomic) BOOL coordinateSpaceDidChange;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) UIEdgeInsets fromContentInset;
@property (readonly, nonatomic) PXTilingLayout *fromLayout;
@property (readonly, nonatomic) CGSize fromReferenceSize;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly, nonatomic) UIEdgeInsets initialContentInset; // ivar: _initialContentInset
@property (readonly, nonatomic) PXTilingLayout *initialLayout; // ivar: _initialLayout
@property (readonly, nonatomic) CGSize initialReferenceSize; // ivar: _initialReferenceSize
@property (readonly, nonatomic) NSArray *invalidationContexts;
@property (readonly, nonatomic) UIEdgeInsets toContentInset;
@property (readonly, nonatomic) PXTilingLayout *toLayout;
@property (readonly, nonatomic) CGSize toReferenceSize;


-(id)defaultAnimationOptionsForTilingController:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addEvent:(id)arg0 ;
-(void)recordCompositionInvalidationContexts:(id)arg0 ;
-(void)recordContentInset:(struct UIEdgeInsets )arg0 ;
-(void)recordLayout:(id)arg0 ;
-(void)recordReferenceSize:(struct CGSize )arg0 ;


@end


#endif