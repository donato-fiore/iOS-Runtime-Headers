// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef W5DIAGNOSTICSTESTRESULT_H
#define W5DIAGNOSTICSTESTRESULT_H

@class NSDictionary, NSError, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5DiagnosticsTestResult : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (nonatomic) BOOL didPass; // ivar: _didPass
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (nonatomic) BOOL result; // ivar: _result
@property (nonatomic) CGFloat testCompleted; // ivar: _testCompleted
@property (nonatomic) NSInteger testID; // ivar: _testID
@property (nonatomic) CGFloat testStarted; // ivar: _testStarted
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDiagnosticsTestResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif