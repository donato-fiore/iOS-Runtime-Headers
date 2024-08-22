// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPROXYINGGENERATIONHANDLER_H
#define QLPROXYINGGENERATIONHANDLER_H

@protocol QLIncrementalThumbnailGenerationHandler;

#import <Foundation/Foundation.h>

#import "QLTGeneratorThumbnailRequest.h"

@interface QLProxyingGenerationHandler : NSObject <QLIncrementalThumbnailGenerationHandler>

 {
    QLTGeneratorThumbnailRequest *_generatorRequest;
}




-(id)initWithGeneratorRequest:(id)arg0 ;
-(void)didGenerateThumbnailForRequestWithUUID:(id)arg0 data:(id)arg1 bitmapFormat:(id)arg2 metadata:(id)arg3 contentRect:(struct CGRect )arg4 iconFlavor:(int)arg5 thumbnailType:(NSInteger)arg6 clientShouldTakeOwnership:(BOOL)arg7 ;
-(void)didUpdateStatus:(NSInteger)arg0 ofThumbnailGenerationWithUUID:(id)arg1 ;
-(void)failedToGenerateThumbnailOfType:(NSInteger)arg0 forRequestWithUUID:(id)arg1 error:(id)arg2 ;


@end


#endif