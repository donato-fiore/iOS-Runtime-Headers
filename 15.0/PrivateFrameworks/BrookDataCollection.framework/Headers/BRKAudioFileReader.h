// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKAUDIOFILEREADER_H
#define BRKAUDIOFILEREADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BRKAudioFileReader : NSObject {
    *OpaqueExtAudioFile _audioFile;
}


@property (readonly, nonatomic) NSString *path; // ivar: _path


-(BOOL)readData:(*short)arg0 count:(*NSInteger)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;


@end


#endif