// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAPLAYSOUNDSUCCESS_H
#define TAPLAYSOUNDSUCCESS_H

@class NSData, NSDate, NSString, NSUUID;
@protocol TAEventProtocol;

#import <Foundation/Foundation.h>


@interface TAPlaySoundSuccess : NSObject <TAEventProtocol>



@property (readonly, nonatomic) NSData *address; // ivar: _address
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger successType; // ivar: _successType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 address:(id)arg1 successType:(NSUInteger)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif