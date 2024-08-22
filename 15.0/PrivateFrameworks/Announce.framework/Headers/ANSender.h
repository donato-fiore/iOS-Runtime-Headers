// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANSENDER_H
#define ANSENDER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANSender : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)senderWithID:(id)arg0 type:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 type:(NSUInteger)arg1 ;
-(id)stringForSenderIdentifierType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif