// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCREFERENCETOMEMBERSHIP_H
#define FCREFERENCETOMEMBERSHIP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCReferenceToMembership : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *membershipID; // ivar: _membershipID


-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)initWithRecord:(id)arg0 ;


@end


#endif