// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMIGRATOR_H
#define MKMIGRATOR_H

@class NSMutableSet;
@protocol MKMigratorDelegate;

#import <Foundation/Foundation.h>

#import "MKImportAnalytics.h"

@interface MKMigrator : NSObject {
    NSUInteger _importCount;
    NSUInteger _importErrorCount;
    NSUInteger _size;
    NSMutableSet *_importErrors;
    MKImportAnalytics *_analytics;
}


@property (weak, nonatomic) NSObject<MKMigratorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger type; // ivar: _type


+(void)initialize;
-(NSUInteger)importCount;
-(NSUInteger)importErrorCount;
-(NSUInteger)size;
-(void)addError:(id)arg0 ;
-(void)import;
-(void)migratorDidAppendDataSize:(NSUInteger)arg0 ;
-(void)migratorDidFailWithImportError:(id)arg0 ;
-(void)migratorDidFailWithImportError:(id)arg0 count:(NSUInteger)arg1 ;
-(void)migratorDidImport;
-(void)migratorDidImportWithCount:(NSUInteger)arg0 ;
-(void)sendAnalytics;


@end


#endif