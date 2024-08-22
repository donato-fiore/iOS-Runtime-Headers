// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTLAYOUTHINT_H
#define TSTLAYOUTHINT_H

@class NSString, NSNumber;
@protocol NSCopying, TSDHint;

#import <Foundation/Foundation.h>

#import "TSTLayout.h"

@interface TSTLayoutHint : NSObject <NSCopying, TSDHint>



@property (nonatomic) TSUCellCoord cacheHintID; // ivar: _cacheHintID
@property (nonatomic) TSUCellRect cellRange; // ivar: _cellRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize effectiveSize; // ivar: _effectiveSize
@property (readonly, nonatomic) NSObject<TSDHint> *firstChildHint;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL horizontal; // ivar: _horizontal
@property (readonly, nonatomic) BOOL isFirstHint;
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSObject<TSDHint> *lastChildHint;
@property (weak, nonatomic) TSTLayout *layout; // ivar: _layout
@property (nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (nonatomic) unsigned int partitionPosition; // ivar: _partitionPosition
@property (retain, nonatomic) NSNumber *partitioningPass; // ivar: _partitioningPass
@property (readonly) Class superclass;


+(Class)archivedHintClass;
-(BOOL)overlapsWithSelectionPath:(id)arg0 ;
-(id)copyForArchiving;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithRange:(struct TSUCellRect )arg0 hintId:(struct TSUCellCoord )arg1 partitionPosition:(unsigned int)arg2 maximumSize:(struct CGSize )arg3 effectiveSize:(struct CGSize )arg4 layout:(id)arg5 validity:(BOOL)arg6 horizontal:(BOOL)arg7 ;
-(void)invalidate;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif