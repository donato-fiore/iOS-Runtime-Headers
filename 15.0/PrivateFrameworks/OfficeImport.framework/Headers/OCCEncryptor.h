// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCCENCRYPTOR_H
#define OCCENCRYPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OCCEncryptor : NSObject {
    *OCCStreamer mStreamer;
}


@property (readonly, nonatomic) NSString *outputFilename; // ivar: mOutputFilename


+(id)allocTempFileWithBase:(id)arg0 filename:(*id)arg1 ;
-(BOOL)encrypt;
-(BOOL)encryptIntoOutputFile;
-(id)initWithStreamer:(struct OCCStreamer *)arg0 ;
-(void)dealloc;


@end


#endif