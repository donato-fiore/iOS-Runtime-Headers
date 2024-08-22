// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNTESTFUTURE_H
#define CNTESTFUTURE_H

@class NSError;
@protocol NSSecureCoding, NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNTestFuture : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding> *result; // ivar: _result


+(BOOL)supportsSecureCoding;
+(id)futureWithError:(id)arg0 ;
+(id)futureWithResult:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif