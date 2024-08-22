// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPDATABASEBATCHITERATOR_H
#define VCPDATABASEBATCHITERATOR_H

@class NSArray, NSSet, NSDictionary, PHAsset;

#import <Foundation/Foundation.h>

#import "VCPDatabaseReader.h"

@interface VCPDatabaseBatchIterator : NSObject {
    VCPDatabaseReader *_reader;
    NSArray *_assets;
    NSSet *_resultsTypes;
    int _batchSize;
    int _idxLast;
    int _idxCurrent;
    NSDictionary *_batchAnalyses;
}


@property (readonly, nonatomic) NSDictionary *analysis; // ivar: _analysis
@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset


+(id)iteratorForAssets:(id)arg0 withDatabaseReader:(id)arg1 resultTypes:(id)arg2 batchSize:(int)arg3 ;
-(BOOL)next;
-(id)initWithDatabaseReader:(id)arg0 forAssets:(id)arg1 resultsTypes:(id)arg2 batchSize:(int)arg3 ;
-(void)nextBatch;


@end


#endif