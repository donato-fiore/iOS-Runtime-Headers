// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUXSTORYTHUMBNAILACTIONPERFORMER_H
#define PUXSTORYTHUMBNAILACTIONPERFORMER_H

@protocol PXStoryThumbnailActionPerformer;

#import <Foundation/Foundation.h>


@interface PUXStoryThumbnailActionPerformer : NSObject <PXStoryThumbnailActionPerformer>

 {
    ? model;
    ? presentPlayerAction;
    ? exportHelper;
}


@property (nonatomic, copy) id *presentPlayerAction;


-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)deleteMemory;
-(void)featureLess:(id)arg0 ;
-(void)fileRadar;
-(void)presentShareSheet;
-(void)presentTitleEditor;
-(void)setFavorite:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)showVisualDiagnostics;


@end


#endif