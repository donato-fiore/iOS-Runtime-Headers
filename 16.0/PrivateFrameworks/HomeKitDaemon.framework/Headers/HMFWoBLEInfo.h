// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFWOBLEINFO_H
#define HMFWOBLEINFO_H

@class HMFObject, NSData;
@protocol NSSecureCoding;



@interface HMFWoBLEInfo : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *bleIdentifier; // ivar: _bleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBLEIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif