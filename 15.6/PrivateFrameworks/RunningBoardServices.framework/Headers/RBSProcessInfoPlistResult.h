// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSINFOPLISTRESULT_H
#define RBSPROCESSINFOPLISTRESULT_H

@class NSString;
@protocol RBSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSProcessInfoPlistResult : NSObject <RBSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *value; // ivar: _value


+(BOOL)supportsRBSXPCSecureCoding;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif