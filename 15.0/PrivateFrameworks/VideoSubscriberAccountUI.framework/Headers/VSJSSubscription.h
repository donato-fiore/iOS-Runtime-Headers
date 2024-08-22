// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSJSSUBSCRIPTION_H
#define VSJSSUBSCRIPTION_H

@class IKJSObject, NSString, NSDate, NSArray;
@protocol VSJSSubscription, NSCopying;



@interface VSJSSubscription : IKJSObject <VSJSSubscription, NSCopying>



@property (nonatomic) NSInteger accessLevel; // ivar: _accessLevel
@property (copy, nonatomic) NSString *billingIdentifier; // ivar: _billingIdentifier
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSArray *tierIdentifiers; // ivar: _tierIdentifiers


+(id)toVSSubscriptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)toVSSubscription;


@end


#endif