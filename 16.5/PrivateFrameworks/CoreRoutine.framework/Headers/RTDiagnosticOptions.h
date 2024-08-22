// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTDIAGNOSTICOPTIONS_H
#define RTDIAGNOSTICOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTDiagnosticOptions : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger optionsMask; // ivar: _optionsMask


+(BOOL)supportsSecureCoding;
-(BOOL)hasMask:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptionsMask:(NSUInteger)arg0 ;
-(void)clearMask;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMask:(NSUInteger)arg0 ;


@end


#endif