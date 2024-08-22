// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFILECODER_H
#define WFFILECODER_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFFileCoder : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger deletionResponsibility; // ivar: _deletionResponsibility
@property (copy, nonatomic) NSURL *sharedDirectory; // ivar: _sharedDirectory
@property (copy, nonatomic) NSURL *sharedTemporaryDirectory; // ivar: _sharedTemporaryDirectory
@property (nonatomic) NSInteger targetPlatform; // ivar: _targetPlatform


+(BOOL)supportsSecureCoding;
-(id)decodeFileWithCoder:(id)arg0 fileIsTemporary:(*BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)archiveFileAtURL:(id)arg0 fileIsTemporary:(BOOL)arg1 withCoder:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)waitForFileAvailabilityWithCompletionHandler:(id)arg0 ;


@end


#endif