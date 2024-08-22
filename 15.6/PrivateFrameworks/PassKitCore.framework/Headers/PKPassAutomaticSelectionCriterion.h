// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSAUTOMATICSELECTIONCRITERION_H
#define PKPASSAUTOMATICSELECTIONCRITERION_H

@class NSSet, NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSSet *TCIs; // ivar: _TCIs
@property (copy, nonatomic) NSData *mask; // ivar: _mask
@property (copy, nonatomic) NSSet *primaryTCIs; // ivar: _primaryTCIs
@property (copy, nonatomic) NSSet *readerIDs; // ivar: _readerIDs
@property (nonatomic) BOOL supportsExpress; // ivar: _supportsExpress
@property (nonatomic) BOOL supportsInSessionExpress; // ivar: _supportsInSessionExpress
@property (nonatomic) NSInteger technologyType; // ivar: _technologyType
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)criterionForExpressMode:(id)arg0 ;
+(id)expressModeForCriterion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif