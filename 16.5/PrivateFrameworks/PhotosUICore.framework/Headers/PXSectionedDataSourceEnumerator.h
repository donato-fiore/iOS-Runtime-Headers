// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDDATASOURCEENUMERATOR_H
#define PXSECTIONEDDATASOURCEENUMERATOR_H

@class NSNumber;


#import "PXEnumerator.h"
#import "PXSectionedDataSource.h"
#import "PXIndexPathSet.h"

@interface PXSectionedDataSourceEnumerator : PXEnumerator {
    NSNumber *_cachedCount;
    NSInteger _currentPhase;
    PXSimpleIndexPath _lastIndexPath;
}


@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSUInteger enumeratedTypes; // ivar: _enumeratedTypes
@property (readonly, nonatomic) PXIndexPathSet *indexPathSet; // ivar: _indexPathSet


-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstObject;
-(id)init;
-(id)initWithDataSource:(id)arg0 indexPathSet:(id)arg1 enumeratedTypes:(NSUInteger)arg2 ;
-(id)nextObject;
-(struct PXSimpleIndexPath )_nextItemIndexPathFromIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )_nextSectionIndexPathFromIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )_nextSubitemIndexPathFromIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)_setToInitialState;
-(void)_transitionToNextPhase;
-(void)reset;


@end


#endif