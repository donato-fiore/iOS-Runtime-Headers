// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSUBMISSIONRECORD_H
#define PLSUBMISSIONRECORD_H

@class NSString, NSDate, NSUUID, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLSubmissionRecord : NSObject <NSSecureCoding>



@property (retain) NSString *ckFileDirPath; // ivar: _ckFileDirPath
@property (readonly, nonatomic) NSDate *configDateApplied; // ivar: _configDateApplied
@property (readonly, nonatomic) NSDate *configDateReceived; // ivar: _configDateReceived
@property (readonly, nonatomic) NSUUID *configUUID; // ivar: _configUUID
@property (retain) NSString *daFileDirPath; // ivar: _daFileDirPath
@property (retain) NSString *filePath; // ivar: _filePath
@property BOOL inSubmission; // ivar: _inSubmission
@property (retain) NSDictionary *tagConfig; // ivar: _tagConfig
@property (retain) NSString *tagUUID; // ivar: _tagUUID


+(BOOL)supportsSecureCoding;
+(id)getCKSubmissionDirPathForTag:(id)arg0 ;
+(id)getDASubmissionDirPathForTag:(id)arg0 ;
-(id)initWithCKFilePath:(id)arg0 tagUUID:(id)arg1 tagConfig:(id)arg2 configUUID:(id)arg3 configDateReceived:(id)arg4 configDateApplied:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)emitAttemptEvent;
-(void)emitSuccessEvent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif