// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ILCOMMUNICATION_H
#define ILCOMMUNICATION_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILCommunication : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (readonly, copy, nonatomic) NSString *sender; // ivar: _sender


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCommunication:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSender:(id)arg0 dateReceived:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif