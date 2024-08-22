// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MMCSGETFILE_H
#define MMCSGETFILE_H



#import "MMCSSimpleFile.h"

@interface MMCSGetFile : MMCSSimpleFile

@property (copy) id *completionBlock; // ivar: _block
@property (copy) id *progressUpdateBlock; // ivar: _updateBlock


-(void)dealloc;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif