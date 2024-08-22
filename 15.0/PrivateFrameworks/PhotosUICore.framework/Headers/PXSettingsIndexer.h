// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSETTINGSINDEXER_H
#define PXSETTINGSINDEXER_H

@class NSMutableArray, NSProgress;

#import <Foundation/Foundation.h>

#import "PXSettingsIndex.h"
#import "PXSettings.h"

@interface PXSettingsIndexer : NSObject

@property (readonly, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (retain, nonatomic) PXSettingsIndex *index; // ivar: _index
@property (retain, nonatomic) NSProgress *indexingProgress; // ivar: _indexingProgress
@property (readonly, nonatomic) PXSettings *rootSettings; // ivar: _rootSettings
@property (nonatomic) NSInteger state; // ivar: _state


-(id)init;
-(id)initWithRootSettings:(id)arg0 ;
-(id)startIndexingWithCompletionHandler:(id)arg0 ;
-(void)_callCompletionHandlersIfNecessary;
-(void)_handleResultIndex:(id)arg0 ;
-(void)_startIndexingIfNecessary;


@end


#endif