// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHLIVEPHOTOCREATIONOPERATION_H
#define PHLIVEPHOTOCREATIONOPERATION_H

@class NSOperation, NSArray;



@interface PHLivePhotoCreationOperation : NSOperation

@property (readonly, nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy, nonatomic) NSArray *resourceURLs; // ivar: _resourceURLs
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)_createImageOnlyLivePhotoWithImageURL:(id)arg0 ;
-(id)initWithResourceURLs:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 resultHandler:(id)arg3 ;
-(void)main;


@end


#endif