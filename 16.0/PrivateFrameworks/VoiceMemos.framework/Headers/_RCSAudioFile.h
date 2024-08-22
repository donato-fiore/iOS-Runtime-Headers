// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RCSAUDIOFILE_H
#define _RCSAUDIOFILE_H

@class NSString, AVAudioFormat, NSDictionary, NSURL;
@protocol RCSAudioFile;

#import <Foundation/Foundation.h>

#import "RCSSavedRecordingAccessToken.h"

@interface _RCSAudioFile : NSObject <RCSAudioFile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVAudioFormat *fileFormat;
@property (retain, nonatomic) RCSSavedRecordingAccessToken *fileToken; // ivar: _fileToken
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVAudioFormat *processingFormat;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url;




@end


#endif