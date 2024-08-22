// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSMODEL_H
#define HSMODEL_H

@protocol HSModelDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HSModel : NSObject {
    id<HSModelDelegate> *delegate;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)getHSModelForEngineMajorVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 numHSModels:(NSUInteger)arg2 modelBuffer:(char *)arg3 length:(NSUInteger)arg4 ;
-(id)init;
-(void)scheduleCoreSpeechTask:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 downloadedModels:(id)arg2 preinstalledModels:(id)arg3 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif