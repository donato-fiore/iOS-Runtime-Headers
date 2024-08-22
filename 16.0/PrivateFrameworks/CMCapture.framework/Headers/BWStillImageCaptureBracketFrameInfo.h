// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGECAPTUREBRACKETFRAMEINFO_H
#define BWSTILLIMAGECAPTUREBRACKETFRAMEINFO_H

@protocol NSSecureCoding;


#import "BWStillImageCaptureFrameInfo.h"

@interface BWStillImageCaptureBracketFrameInfo : BWStillImageCaptureFrameInfo <NSSecureCoding>



@property (readonly, nonatomic) int bracketedCaptureSequenceNumber; // ivar: _bracketedCaptureSequenceNumber


+(BOOL)supportsSecureCoding;
+(id)infoWithBracketedCaptureSequenceNumber:(int)arg0 mainFlags:(NSUInteger)arg1 sifrFlags:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBracketedCaptureSequenceNumber:(int)arg0 mainFlags:(NSUInteger)arg1 sifrFlags:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif