// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKMECARDUSERPROVIDER_H
#define CRKMECARDUSERPROVIDER_H

@class NSString;
@protocol CRKUserProviding, CRKContactsPrimitives, CRKCancelable;

#import <Foundation/Foundation.h>

#import "CRKUser.h"

@interface CRKMeCardUserProvider : NSObject <CRKUserProviding>



@property (readonly, nonatomic) NSObject<CRKContactsPrimitives> *contactsPrimitives; // ivar: _contactsPrimitives
@property (retain, nonatomic) NSObject<CRKCancelable> *contactsSubscription; // ivar: _contactsSubscription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CRKUser *user; // ivar: _user


-(id)fetchCurrentUser;
-(id)init;
-(id)initWithContactsPrimitives:(id)arg0 ;
-(void)beginObservingContacts;
-(void)rebuildUser;
-(void)rebuildUserDebounced;


@end


#endif