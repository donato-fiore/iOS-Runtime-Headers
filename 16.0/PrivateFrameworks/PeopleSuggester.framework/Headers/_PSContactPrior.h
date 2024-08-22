// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSCONTACTPRIOR_H
#define _PSCONTACTPRIOR_H

@class CNContact, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _PSContactPrior : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (nonatomic) float priorScore; // ivar: _priorScore
@property (nonatomic) unsigned int rank; // ivar: _rank


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 priorScore:(float)arg1 rank:(unsigned int)arg2 modelName:(id)arg3 modelVersion:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif