// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKVIDEOASSETSCRUBBINGOPERATION_H
#define NTKVIDEOASSETSCRUBBINGOPERATION_H

@class NSString;
@protocol NTKResourceDirectoryScrubbingOperation;

#import <Foundation/Foundation.h>


@interface NTKVideoAssetScrubbingOperation : NSObject <NTKResourceDirectoryScrubbingOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)scrubAssetAtURL:(id)arg0 toDestinationURL:(id)arg1 error:(*id)arg2 ;
-(id)supportedExtensions;


@end


#endif