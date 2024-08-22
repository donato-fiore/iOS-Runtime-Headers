// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FPCOPYFILESTATUS_H
#define _FPCOPYFILESTATUS_H

@class NSMutableDictionary, NSProgress;

#import <Foundation/Foundation.h>


@interface _FPCopyFileStatus : NSObject

@property int copyError; // ivar: _copyError
@property (retain) NSMutableDictionary *lastBytesCopiedByFile; // ivar: _lastBytesCopiedByFile
@property (retain) NSProgress *progress; // ivar: _progress


-(id)init;
-(void)beginCopyingFile:(id)arg0 state:(struct _copyfile_state *)arg1 ;
-(void)finishCopyingFile:(id)arg0 state:(struct _copyfile_state *)arg1 ;
-(void)updateCopyingFile:(id)arg0 state:(struct _copyfile_state *)arg1 ;


@end


#endif