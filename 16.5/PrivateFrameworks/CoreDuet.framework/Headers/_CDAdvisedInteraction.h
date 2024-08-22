// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDADVISEDINTERACTION_H
#define _CDADVISEDINTERACTION_H

@class NSMutableSet, NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CDContact.h"

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableSet *_reasons;
}


@property (retain) NSString *account; // ivar: _account
@property (retain) NSString *bundleId; // ivar: _bundleId
@property (retain) _CDContact *contact; // ivar: _contact
@property NSInteger mechanism; // ivar: _mechanism
@property (retain) NSSet *reasons;
@property CGFloat score; // ivar: _score
@property NSInteger similarBidirectionalInteractionsCount; // ivar: _similarBidirectionalInteractionsCount
@property NSInteger similarIncomingInteractionsCount; // ivar: _similarIncomingInteractionsCount
@property NSInteger similarOutgoingInteractionsCount; // ivar: _similarOutgoingInteractionsCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionOfReasons:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addReason:(NSInteger)arg0 ;
-(void)addReasons:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif