// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIMOVREADER_H
#define SIMOVREADER_H

@class NSString, MOVStreamReader;

#import <Foundation/Foundation.h>


@interface SIMovReader : NSObject {
    NSString *_trackName;
}


@property (retain, nonatomic) MOVStreamReader *reader; // ivar: _reader


-(id)initReaderWithVideoURL:(id)arg0 andTrackName:(id)arg1 ;
-(struct __CVBuffer *)readFrame:(struct ? *)arg0 ;


@end


#endif