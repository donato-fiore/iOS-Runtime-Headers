// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEPROGRESSVIEWMODELSNAPSHOT_H
#define AEPROGRESSVIEWMODELSNAPSHOT_H

@class PXIndexPathSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface AEProgressViewModelSnapshot : NSObject

@property (readonly, nonatomic) PXIndexPathSet *_pathsWithProgress; // ivar: __pathsWithProgress
@property (readonly, nonatomic) NSDictionary *_progressByIndexPath; // ivar: __progressByIndexPath
@property (readonly, nonatomic) NSInteger correspondingDataSourceIdentifier; // ivar: _correspondingDataSourceIdentifier


-(BOOL)hasProgressForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)initWithProgressByIndexPath:(id)arg0 dataSourceIdenfitier:(NSInteger)arg1 ;
-(id)progressForIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif