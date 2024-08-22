// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUVIDEOEDITPLUGINDATASOURCE_H
#define PUVIDEOEDITPLUGINDATASOURCE_H

@class NSString, PHAsset;
@protocol PUVideoEditPluginSessionDataSource;

#import <Foundation/Foundation.h>


@interface PUVideoEditPluginDataSource : NSObject <PUVideoEditPluginSessionDataSource>



@property (nonatomic) BOOL allowsRevertInSession; // ivar: _allowsRevertInSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PHAsset *videoAsset; // ivar: _videoAsset


-(BOOL)editPluginSessionCanRevertToOriginal:(id)arg0 ;
-(id)init;
-(id)initWithVideoAsset:(id)arg0 ;
-(void)_fetchCanRevertAsset:(id)arg0 asynchronously:(BOOL)arg1 handler:(id)arg2 ;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg0 resultHandler:(id)arg1 ;
-(void)_requestRenderedVideoForVideoURL:(id)arg0 adjustmentData:(id)arg1 canHandleAdjustmentData:(BOOL)arg2 resultHandler:(id)arg3 ;
-(void)editPluginSession:(id)arg0 commitContentEditingOutput:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)editPluginSession:(id)arg0 loadAdjustmentDataWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 loadPlaceholderImageWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 loadVideoURLWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 revertToOriginalWithCompletionHandler:(id)arg1 ;


@end


#endif