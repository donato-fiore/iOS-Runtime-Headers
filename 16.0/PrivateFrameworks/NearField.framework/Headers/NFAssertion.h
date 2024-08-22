// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFASSERTION_H
#define NFASSERTION_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFAssertion : NSObject <NSSecureCoding>



@property (readonly) NSDate *assertionTime; // ivar: _assertionTime
@property (readonly) NSUInteger assertionType; // ivar: _assertionType
@property (readonly) int pid; // ivar: _pid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)sessionID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif