// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSUPPORTEDACCESSORYDIAGNOSTICS_H
#define HMSUPPORTEDACCESSORYDIAGNOSTICS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HMSupportedAccessoryDiagnostics : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger supportedAudio; // ivar: _supportedAudio
@property (readonly, nonatomic) NSInteger supportedFormat; // ivar: _supportedFormat
@property (readonly, nonatomic) NSUInteger supportedOptions; // ivar: _supportedOptions
@property (readonly, nonatomic) NSUInteger supportedTypes; // ivar: _supportedTypes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSupportedTypes:(NSUInteger)arg0 format:(NSInteger)arg1 audio:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif