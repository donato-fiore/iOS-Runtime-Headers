// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHTRANSACTION_H
#define CHTRANSACTION_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHTransaction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *record; // ivar: _record
@property (readonly, nonatomic) NSUInteger transactionType; // ivar: _transactionType


+(BOOL)supportsSecureCoding;
+(id)toString:(NSUInteger)arg0 ;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransaction:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 andRecord:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 andRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif