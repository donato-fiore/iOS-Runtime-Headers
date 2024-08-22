// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DICREATERAWPARAMS_H
#define DICREATERAWPARAMS_H



#import "DICreateParams.h"

@interface DICreateRAWParams : DICreateParams



-(BOOL)checkExistingFileWithIsDirectory:(BOOL)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 numBlocks:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)createDiskImageParamsXPC;


@end


#endif