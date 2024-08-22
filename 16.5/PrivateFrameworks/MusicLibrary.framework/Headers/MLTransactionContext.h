// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLTRANSACTIONCONTEXT_H
#define MLTRANSACTIONCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ML3DatabasePrivacyContext.h"

@interface MLTransactionContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSUInteger priorityLevel; // ivar: _priorityLevel
@property (readonly, nonatomic) ML3DatabasePrivacyContext *privacyContext; // ivar: _privacyContext


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrivacyContext:(id)arg0 path:(id)arg1 priorityLevel:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif