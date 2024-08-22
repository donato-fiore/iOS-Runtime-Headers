// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIMAGEANALYSISCONTROLLER_H
#define ICIMAGEANALYSISCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICImageAnalysisController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *photoLibraryQueue; // ivar: _photoLibraryQueue


+(id)sharedController;
-(id)init;
-(void)analyzeSearchableItems:(id)arg0 completion:(id)arg1 ;


@end


#endif