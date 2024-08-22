// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSPRITEREFERENCE_H
#define PXGSPRITEREFERENCE_H

@class NSString;
@protocol PXGSpriteIndexReferencing;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasObjectReference;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDynamic; // ivar: _isDynamic
@property (readonly, nonatomic) BOOL isValid;
@property (weak, nonatomic) PXGLayout *layout; // ivar: _layout
@property (nonatomic) NSInteger layoutVersion; // ivar: _layoutVersion
@property (retain, nonatomic) id *objectReference; // ivar: _objectReference
@property (nonatomic) unsigned int spriteIndex; // ivar: _spriteIndex
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)init;
-(void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg0 appliedToLayout:(id)arg1 ;


@end


#endif