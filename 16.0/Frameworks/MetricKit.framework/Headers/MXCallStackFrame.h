// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXCALLSTACKFRAME_H
#define MXCALLSTACKFRAME_H

@class NSNumber, NSString, NSUUID, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXCallStackFrame : NSObject <NSSecureCoding>



@property (readonly) NSNumber *address; // ivar: _address
@property (readonly) NSString *binaryName; // ivar: _binaryName
@property (readonly) NSUUID *binaryUUID; // ivar: _binaryUUID
@property (readonly) NSNumber *offsetInBinary; // ivar: _offsetInBinary
@property (readonly) NSNumber *sampleCount; // ivar: _sampleCount
@property (retain) NSArray *subFrames; // ivar: _subFrames


+(BOOL)supportsSecureCoding;
-(id)initWithBinaryName:(id)arg0 binaryUUID:(id)arg1 address:(id)arg2 binaryOffset:(id)arg3 sampleCount:(id)arg4 withDepth:(NSUInteger)arg5 subFrameArray:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif