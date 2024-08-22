// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGADATAUPDATEASYNCOPERATION_H
#define CCVEGADATAUPDATEASYNCOPERATION_H

@class NSString, NSArray;
@protocol CCAsyncOperation;

#import <Foundation/Foundation.h>

#import "CCVegaRenderer.h"

@interface CCVegaDataUpdateAsyncOperation : NSObject <CCAsyncOperation>



@property (copy) id *callbackForRowsToRemove; // ivar: _callbackForRowsToRemove
@property (retain) NSString *namedDataset; // ivar: _namedDataset
@property (weak, nonatomic) CCVegaRenderer *renderer; // ivar: _renderer
@property (retain) NSArray *rowsToInsert; // ivar: _rowsToInsert


-(void)doDataUpdate:(id)arg0 ;
-(void)performOperationWithCallback:(id)arg0 ;


@end


#endif