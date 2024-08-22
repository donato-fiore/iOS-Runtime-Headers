// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OTOPERATIONCONFIGURATION_H
#define OTOPERATIONCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OTOperationConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) BOOL discretionaryNetwork; // ivar: _discretionaryNetwork
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) NSUInteger timeoutWaitForCKAccount; // ivar: _timeoutWaitForCKAccount
@property (nonatomic) BOOL useCachedAccountStatus; // ivar: _useCachedAccountStatus


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif