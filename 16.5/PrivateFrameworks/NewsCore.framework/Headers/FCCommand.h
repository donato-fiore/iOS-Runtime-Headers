// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCOMMAND_H
#define FCCOMMAND_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCCommand : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)canCoalesceWithCommand:(id)arg0 ;
-(NSUInteger)statusForCloudKitError:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)coalesceWithCommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif