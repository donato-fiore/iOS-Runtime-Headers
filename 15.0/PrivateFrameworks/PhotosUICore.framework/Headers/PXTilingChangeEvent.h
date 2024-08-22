// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTILINGCHANGEEVENT_H
#define PXTILINGCHANGEEVENT_H


#import <Foundation/Foundation.h>

#import "PXTilingLayoutInvalidationContext.h"
#import "PXTilingLayout.h"

@interface PXTilingChangeEvent : NSObject

@property (readonly, nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) PXTilingLayoutInvalidationContext *context; // ivar: _context
@property (readonly, nonatomic) PXTilingLayout *layout; // ivar: _layout
@property (readonly, nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)description;
-(id)init;
-(id)initWithChangeToContentInset:(struct UIEdgeInsets )arg0 ;
-(id)initWithChangeToLayout:(id)arg0 ;
-(id)initWithChangeToReferenceSize:(struct CGSize )arg0 ;
-(id)initWithCoordinateSpaceChange;
-(id)initWithLayoutInvalidationContext:(id)arg0 ;


@end


#endif