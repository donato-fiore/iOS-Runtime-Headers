// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTRELATION_H
#define CNCONTACTRELATION_H

@class NSString;
@protocol CNObjectValidation, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNContactRelation : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)contactRelationWithName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif