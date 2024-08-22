// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLSESSIONMUTABLEEFFECTIVECONFIGURATION_H
#define NSURLSESSIONMUTABLEEFFECTIVECONFIGURATION_H

@protocol NSSecureCoding;


#import "NSURLSessionConfiguration.h"

@interface NSURLSessionMutableEffectiveConfiguration : NSURLSessionConfiguration <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif