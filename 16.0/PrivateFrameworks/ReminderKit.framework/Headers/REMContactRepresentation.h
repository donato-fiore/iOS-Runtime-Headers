// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMCONTACTREPRESENTATION_H
#define REMCONTACTREPRESENTATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMContactRepresentation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *emails; // ivar: _emails
@property (copy, nonatomic) NSArray *phones; // ivar: _phones


+(BOOL)supportsSecureCoding;
+(id)representationFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesContactRepresentation:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedData;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhones:(id)arg0 emails:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif