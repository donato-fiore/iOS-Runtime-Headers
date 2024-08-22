// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDASSETREQUESTREFERENCE_H
#define MANAGEDASSETREQUESTREFERENCE_H

@class NSManagedObject, NSString;



@interface ManagedAssetRequestReference : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) CGFloat expirationTime;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic, copy) NSString *remoteURL;
@property (nonatomic) CGFloat requestTime;
@property (nonatomic, copy) NSString *type;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif