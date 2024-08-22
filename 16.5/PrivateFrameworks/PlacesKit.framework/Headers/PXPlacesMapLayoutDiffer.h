// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPLACESMAPLAYOUTDIFFER_H
#define PXPLACESMAPLAYOUTDIFFER_H

@class NSMutableArray;
@protocol PXPlacesMapLayoutResult;

#import <Foundation/Foundation.h>


@interface PXPlacesMapLayoutDiffer : NSObject {
    NSMutableArray *_changes;
}


@property (readonly, nonatomic) NSObject<PXPlacesMapLayoutResult> *sourceLayoutResult; // ivar: _sourceLayoutResult
@property (readonly, nonatomic) NSObject<PXPlacesMapLayoutResult> *targetLayoutResult; // ivar: _targetLayoutResult


-(id)computeChanges;
-(id)initWithSourceLayoutResult:(id)arg0 targetLayoutResult:(id)arg1 ;
-(void)_addTargetLayoutItem:(id)arg0 ;
-(void)_computeChanges;
-(void)_relateSourceLayoutItem:(id)arg0 withTargetLayoutItem:(id)arg1 ;
-(void)_removeSourceLayoutItem:(id)arg0 ;


@end


#endif