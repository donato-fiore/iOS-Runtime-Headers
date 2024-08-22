// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROPROJECT_H
#define MIROPROJECT_H



#import "Project.h"

@interface MiroProject : Project



-(BOOL)hasMissingAssets;
-(id)imageAtTime:(int)arg0 withSize:(struct CGSize )arg1 ;
-(id)videoPreviewImageOfSize:(struct CGSize )arg0 ;
-(void)didInitWithContentsOfFile;


@end


#endif