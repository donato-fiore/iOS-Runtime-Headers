// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGNAMINGSHAREDASSETSANALYZER_H
#define PGNAMINGSHAREDASSETSANALYZER_H

@class NSString;
@protocol PGNamingAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphNamingProcessor.h"
#import "PGManager.h"

@interface PGNamingSharedAssetsAnalyzer : NSObject <PGNamingAnalyzer>

 {
    PGGraphNamingProcessor *_processor;
    PGManager *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNamingProcessor:(id)arg0 ;
-(id)initWithNamingProcessor:(id)arg0 manager:(id)arg1 ;
-(id)name;
-(void)findSharedAssetMatchesFromSharingRecords:(id)arg0 personLocalIdentifiersByAssetUUID:(id)arg1 graph:(id)arg2 withProgressBlock:(id)arg3 ;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif