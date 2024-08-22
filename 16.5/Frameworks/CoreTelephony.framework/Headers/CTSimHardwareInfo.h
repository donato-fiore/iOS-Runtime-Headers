// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSIMHARDWAREINFO_H
#define CTSIMHARDWAREINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSimHardwareInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger hardwareType; // ivar: _hardwareType
@property (nonatomic) NSInteger simLocation; // ivar: _simLocation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHardwareInfo:(NSInteger)arg0 simLocation:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif