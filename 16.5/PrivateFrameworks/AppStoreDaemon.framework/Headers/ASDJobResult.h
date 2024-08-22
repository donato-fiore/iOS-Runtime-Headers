// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDJOBRESULT_H
#define ASDJOBRESULT_H

@class NSString, NSError, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSNumber *persistentID; // ivar: _persistentID
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)resultWithExistingActivity:(NSInteger)arg0 bundleID:(id)arg1 ;
+(id)resultWithInvalidActivity:(NSInteger)arg0 bundleID:(id)arg1 ;
+(id)resultWithPersistentID:(id)arg0 bundleID:(id)arg1 status:(NSInteger)arg2 error:(id)arg3 ;
+(id)resultWithRestrictedActivity:(NSInteger)arg0 bundleID:(id)arg1 ;
+(id)resultWithValidActivity:(NSInteger)arg0 bundleID:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif