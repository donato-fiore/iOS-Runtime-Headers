// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSOPPORTUNISTICOPTIONS_H
#define IDSOPPORTUNISTICOPTIONS_H

@class NSArray, NSDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSOpportunisticOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *blocklistedDestinations; // ivar: _blocklistedDestinations
@property (nonatomic) BOOL destinationsMustBeInContacts; // ivar: _destinationsMustBeInContacts
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSDate *expiryDate; // ivar: _expiryDate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithBlocklistedDestinations:(id)arg0 expiryDate:(id)arg1 destinationsMustBeInContacts:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif