// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAVIDEOPIPELINELIBRARYSPI_H
#define CVAVIDEOPIPELINELIBRARYSPI_H


#import <Foundation/Foundation.h>


@interface CVAVideoPipelineLibrarySPI : NSObject



+(BOOL)updateRequestWithLiveData:(id)arg0 mattingRequest:(id)arg1 faceKitProcessOutput:(id)arg2 error:(*id)arg3 ;
+(id)portraitRequestWithBackground:(id)arg0 light:(id)arg1 post:(id)arg2 isTmpConfig:(BOOL)arg3 error:(*id)arg4 ;


@end


#endif