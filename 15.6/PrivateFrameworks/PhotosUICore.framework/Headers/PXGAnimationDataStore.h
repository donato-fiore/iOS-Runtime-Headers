// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGANIMATIONDATASTORE_H
#define PXGANIMATIONDATASTORE_H

@class NSMutableIndexSet, NSIndexSet, NSString;
@protocol PXGDiagnosticsProvider;

#import <Foundation/Foundation.h>


@interface PXGAnimationDataStore : NSObject <PXGDiagnosticsProvider>

 {
    unsigned int _spriteCapacity;
    unsigned short _groupCapacity;
    unsigned int _mappedSpriteCapacity;
    unsigned short _mappedAnimationCapacity;
    NSMutableIndexSet *_activeGroupIndexes;
}


@property (readonly, copy, nonatomic) NSIndexSet *activeGroupIndexes;
@property (readonly, nonatomic) *unsigned short animationIndexBySpriteIndex; // ivar: _animationIndexBySpriteIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) *unsigned short groupIndexByAnimationIndex; // ivar: _groupIndexByAnimationIndex
@property (readonly, nonatomic) *? groupInfos; // ivar: _groupInfos
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short mappedAnimationCount; // ivar: _mappedAnimationCount
@property (nonatomic) unsigned int mappedSpriteCount; // ivar: _mappedSpriteCount
@property (nonatomic) unsigned int spriteCount; // ivar: _spriteCount
@property (readonly, nonatomic) *? spriteInfos; // ivar: _spriteInfos
@property (readonly) Class superclass;


-(id)init;
-(id)spriteIndexesExpiringAtTime:(CGFloat)arg0 ;
-(unsigned short)checkOutGroup;
-(void)_resizeStorageToGroupIndex:(unsigned short)arg0 ;
-(void)applySpriteChangeDetails:(id)arg0 ;
-(void)checkInGroupAtIndexes:(id)arg0 ;
-(void)dealloc;
-(void)increaseMappedSpriteCountBy:(unsigned int)arg0 usingAnimationIndex:(unsigned short)arg1 ;


@end


#endif