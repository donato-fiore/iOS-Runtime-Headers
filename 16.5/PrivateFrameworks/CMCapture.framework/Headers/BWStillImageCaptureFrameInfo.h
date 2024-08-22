// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECAPTUREFRAMEINFO_H
#define BWSTILLIMAGECAPTUREFRAMEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BWStillImageCaptureFrameInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger mainFlags; // ivar: _mainFlags
@property (readonly, nonatomic) NSUInteger sifrFlags; // ivar: _sifrFlags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMainFlags:(NSUInteger)arg0 sifrFlags:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif