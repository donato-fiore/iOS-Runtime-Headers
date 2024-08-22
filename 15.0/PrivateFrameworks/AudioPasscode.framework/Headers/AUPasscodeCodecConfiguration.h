// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUPASSCODECODECCONFIGURATION_H
#define AUPASSCODECODECCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AUPasscodeCodecConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *algorithmName; // ivar: _algorithmName
@property (nonatomic) NSInteger numChannels; // ivar: _numChannels
@property (nonatomic) NSInteger payloadLengthBytes; // ivar: _payloadLengthBytes
@property (nonatomic) NSInteger sampleRate; // ivar: _sampleRate


+(BOOL)supportsSecureCoding;
-(id)commandLineOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAlgorithmName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommandLineArgs:(id)arg0 ;
-(void)__setDefaultValues;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif