// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCTPNRVALIDATIONMECHANISM_H
#define IDSCTPNRVALIDATIONMECHANISM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)SMSLessMechanism;
+(id)SMSMechanismWithContext:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 context:(id)arg1 ;


@end


#endif