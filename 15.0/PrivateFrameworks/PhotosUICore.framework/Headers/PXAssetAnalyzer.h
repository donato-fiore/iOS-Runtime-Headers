// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETANALYZER_H
#define PXASSETANALYZER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PXAssetAnalyzer : NSObject {
    NSMutableDictionary *_analyzerUUIDToRequest;
}




-(BOOL)canAnalyzeAsset:(id)arg0 forWorkerType:(NSInteger)arg1 ;
-(id)_keyForAssetUUID:(id)arg0 forWorkerType:(NSInteger)arg1 ;
-(id)init;
-(void)_handleResultForRequest:(id)arg0 success:(BOOL)arg1 ;
-(void)analyzeAsset:(id)arg0 forWorkerType:(NSInteger)arg1 ;


@end


#endif