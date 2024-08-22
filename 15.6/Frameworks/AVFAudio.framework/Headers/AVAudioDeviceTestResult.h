// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIODEVICETESTRESULT_H
#define AVAUDIODEVICETESTRESULT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat correlationValue; // ivar: _correlationValue
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSInteger inputID; // ivar: _inputID
@property (nonatomic) NSInteger outputID; // ivar: _outputID
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 inputID:(NSInteger)arg1 outputID:(NSInteger)arg2 sampleRate:(CGFloat)arg3 correlationValue:(CGFloat)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif