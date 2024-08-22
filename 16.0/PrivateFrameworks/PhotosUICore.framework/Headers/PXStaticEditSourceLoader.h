// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTATICEDITSOURCELOADER_H
#define PXSTATICEDITSOURCELOADER_H

@class PLEditSource, PICompositionController, NSString, NSError, NSNumber, NSProgress;
@protocol PXEditSourceLoader;

#import <Foundation/Foundation.h>


@interface PXStaticEditSourceLoader : NSObject <PXEditSourceLoader>



@property (readonly, nonatomic) PLEditSource *activeEditSource;
@property (readonly, nonatomic) NSInteger baseVersion; // ivar: _baseVersion
@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // ivar: _livePhotoPairingIdentifier
@property (readonly, nonatomic) NSNumber *loadDuration;
@property (readonly, copy, nonatomic) PICompositionController *originalCompositionController; // ivar: _originalCompositionController
@property (readonly, nonatomic) PLEditSource *overcaptureEditSource; // ivar: _overcaptureEditSource
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(id)initWithEditSource:(id)arg0 compositionController:(id)arg1 baseVersion:(NSInteger)arg2 contentIdentifier:(id)arg3 ;
-(void)beginLoading;


@end


#endif