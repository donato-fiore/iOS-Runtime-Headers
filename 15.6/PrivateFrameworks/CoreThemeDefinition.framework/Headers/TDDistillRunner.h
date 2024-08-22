// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDDISTILLRUNNER_H
#define TDDISTILLRUNNER_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "TDDistiller.h"
#import "TDLogger.h"

@interface TDDistillRunner : NSObject {
    BOOL _packDocument;
    TDDistiller *_distiller;
    NSURL *_carScratchURL;
}


@property NSInteger assetStoreVersionNumber; // ivar: _assetStoreVersionNumber
@property (copy) NSString *assetStoreVersionString; // ivar: _assetStoreVersionString
@property (retain, nonatomic) TDLogger *logger; // ivar: _logger
@property (nonatomic) NSString *minDeploymentTarget; // ivar: _minDeploymentTarget
@property (copy, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property (nonatomic) BOOL packImagesInDocument;


-(BOOL)_isDistillUnnecessaryForDocument:(id)arg0 ;
-(BOOL)runDistillWithDocumentURL:(id)arg0 outputURL:(id)arg1 attemptIncremental:(BOOL)arg2 forceDistill:(BOOL)arg3 ;
-(id)carScratchURL;
-(id)init;
-(void)_moveScratchToOutputPath;
-(void)_removeScratchPath;
-(void)dealloc;


@end


#endif