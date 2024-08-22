// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTMATCHINFO_H
#define CNCONTACTMATCHINFO_H

@class CNPromise, NSDictionary, NSSet, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CNContactMatchInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CNPromise *excerpt; // ivar: _excerpt
@property (nonatomic) BOOL matchedNameProperty; // ivar: _matchedNameProperty
@property (copy, nonatomic) NSDictionary *matchedProperties; // ivar: _matchedProperties
@property (retain, nonatomic) NSSet *matchedTerms; // ivar: _matchedTerms
@property (copy, nonatomic) NSNumber *relevanceScore; // ivar: _relevanceScore


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif