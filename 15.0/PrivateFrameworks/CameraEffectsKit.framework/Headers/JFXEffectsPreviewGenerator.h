// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTSPREVIEWGENERATOR_H
#define JFXEFFECTSPREVIEWGENERATOR_H

@class PVRenderer, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JFXEffectsPreviewGenerator : NSObject {
    PVRenderer *_renderer;
}


@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderCompleteQueue; // ivar: _renderCompleteQueue


-(id)init;
-(id)initWithRendererOptions:(id)arg0 ;
-(void)_renderJob:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearCaches;
-(void)dealloc;
-(void)generatePreviewRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)perfLog;
-(void)trackStats:(BOOL)arg0 ;


@end


#endif