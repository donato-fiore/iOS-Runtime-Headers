// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXAUTOLOOPANALYSISOPERATION_H
#define PXAUTOLOOPANALYSISOPERATION_H

@class NSOperation, NSDictionary, NSNumber, PLLivePhotoEditSource, NSError, NSProgress;



@interface PXAutoloopAnalysisOperation : NSOperation {
    NSDictionary *_recipesByVariationType;
}


@property (readonly, nonatomic) NSDictionary *analysisResult; // ivar: _analysisResult
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) PLLivePhotoEditSource *editSource; // ivar: _editSource
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) BOOL succeeded; // ivar: _succeeded


-(id)init;
-(id)initWithEditSource:(id)arg0 ;
-(id)recipeForVariationType:(NSInteger)arg0 ;
-(void)_timeout;
-(void)cancel;
-(void)main;


@end


#endif