// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRARKITDATARECORDER_H
#define PRARKITDATARECORDER_H

@class NSURL, NSString, ARSession;


#import "PRDataRecorder.h"

@interface PRARKitDataRecorder : PRDataRecorder

@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (retain, nonatomic) ARSession *session; // ivar: _session


-(id)initWithARSession:(id)arg0 ;
-(id)stopAndSave;
-(void)start;
-(void)stopAndDiscard;


@end


#endif