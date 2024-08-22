// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATTASKPROGRESS_H
#define CATTASKPROGRESS_H

@class NSUUID, NSError, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CATTaskProgress : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (nonatomic) NSInteger completedUnitCount; // ivar: _completedUnitCount
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL isCancelable; // ivar: _isCancelable
@property (nonatomic) BOOL isCanceled; // ivar: _isCanceled
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (copy, nonatomic) NSString *requestClassName; // ivar: _requestClassName
@property (retain, nonatomic) id *resultObject; // ivar: _resultObject
@property (readonly, nonatomic) NSUInteger state;
@property (nonatomic) NSInteger totalUnitCount; // ivar: _totalUnitCount
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(Class)classForResultObjectWithRequestClassName:(id)arg0 ;
+(id)progressForOperation:(id)arg0 ;
+(void)assertResultObject:(id)arg0 isValidForRequestClassName:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperation:(id)arg0 ;
-(id)initWithOperationUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)progressStateDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setProgress:(id)arg0 ;


@end


#endif