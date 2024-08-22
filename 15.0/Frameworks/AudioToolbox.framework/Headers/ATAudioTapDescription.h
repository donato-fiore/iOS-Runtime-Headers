// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATAUDIOTAPDESCRIPTION_H
#define ATAUDIOTAPDESCRIPTION_H

@class NSUUID, NSArray, AVAudioFormat, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATAudioTapDescription : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSArray *excludedPIDs; // ivar: _excludedPIDs
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) NSInteger tapType; // ivar: _tapType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initProcessTapInternalWithFormat:(id)arg0 PID:(int)arg1 ;
-(id)initProcessTapWithFormat:(id)arg0 PID:(int)arg1 ;
-(id)initSystemTapWithFormat:(id)arg0 ;
-(id)initSystemTapWithFormat:(id)arg0 excludePIDs:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif