// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEMESSAGEACTIONDESTINATION_H
#define MEMESSAGEACTIONDESTINATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEMessageActionDestination : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger mailboxType; // ivar: _mailboxType


+(BOOL)supportsSecureCoding;
+(id)allowedMailboxTypes;
+(id)archive;
+(id)inbox;
+(id)junk;
+(id)trash;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultMailboxType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif