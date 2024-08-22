// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCONTACTMATCH_H
#define SGCONTACTMATCH_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SGRecordId.h"
#import "SGContact.h"
#import "SGMatchedDetails.h"
#import "SGObject.h"

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding>

 {
    SGRecordId *_matchingFieldRecordId;
}


@property (readonly, nonatomic) SGContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSArray *matchTokens; // ivar: _matchTokens
@property (readonly, nonatomic) SGMatchedDetails *matchedDetails; // ivar: _matchedDetails
@property (readonly, nonatomic) SGObject *matchingField;
@property (readonly, nonatomic) NSInteger matchingFieldType; // ivar: _matchingFieldType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactMatch:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 matchTokens:(id)arg1 matchInfo:(id)arg2 ;
-(id)initWithContact:(id)arg0 matchingEmailAddressRecordId:(id)arg1 ;
-(id)initWithContact:(id)arg0 matchingEmailAddressRecordId:(id)arg1 matchTokens:(id)arg2 ;
-(id)initWithContact:(id)arg0 matchingFieldRecordId:(id)arg1 matchTokens:(id)arg2 ;
-(id)initWithContact:(id)arg0 matchingNameRecordId:(id)arg1 ;
-(id)initWithContact:(id)arg0 matchingNameRecordId:(id)arg1 matchTokens:(id)arg2 ;
-(id)initWithContact:(id)arg0 matchingPhoneRecordId:(id)arg1 matchTokens:(id)arg2 ;
-(id)initWithContact:(id)arg0 matchingRecordId:(id)arg1 matchType:(NSInteger)arg2 matchTokens:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif