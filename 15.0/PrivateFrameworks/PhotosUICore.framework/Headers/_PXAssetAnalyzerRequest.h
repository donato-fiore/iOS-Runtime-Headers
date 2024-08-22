// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXASSETANALYZERREQUEST_H
#define _PXASSETANALYZERREQUEST_H

@class PHAsset, NSString;
@protocol PXPhotoLibraryUIChangeObserver;

#import <Foundation/Foundation.h>


@interface _PXAssetAnalyzerRequest : NSObject <PXPhotoLibraryUIChangeObserver>

 {
    id *_resultHandler;
    BOOL _finished;
}


@property (readonly) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSInteger workerType; // ivar: _workerType


-(id)initWithAsset:(id)arg0 workerType:(NSInteger)arg1 ;
-(void)_handleFinishWithSuccess:(BOOL)arg0 ;
-(void)runWithResultHandler:(id)arg0 ;


@end


#endif