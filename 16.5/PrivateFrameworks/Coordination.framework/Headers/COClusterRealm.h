// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCLUSTERREALM_H
#define COCLUSTERREALM_H

@class NSString, NSPredicate, MGGroupQuery;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface COClusterRealm : NSObject <NSCopying, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) MGGroupQuery *query; // ivar: _query
@property (readonly, copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (readonly, nonatomic) BOOL updateHandlerInvoked; // ivar: _updateHandlerInvoked


+(BOOL)supportsSecureCoding;
+(id)realmWithMediaGroup:(id)arg0 ;
+(id)realmWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClusterRealm:(id)arg0 ;
-(NSUInteger)hash;
-(id)_identifierForGroupResult:(id)arg0 ;
-(id)_initWithPredicate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_handleQueryResult:(id)arg0 error:(id)arg1 ;
-(void)_invokeUpdateHandler;
-(void)_withLock:(id)arg0 ;
-(void)activate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif