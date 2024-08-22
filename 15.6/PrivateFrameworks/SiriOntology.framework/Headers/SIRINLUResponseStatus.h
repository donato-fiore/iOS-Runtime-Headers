// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLURESPONSESTATUS_H
#define SIRINLURESPONSESTATUS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLUResponseStatus : NSObject <NSSecureCoding>



@property (nonatomic) int statusCode; // ivar: _statusCode
@property (retain, nonatomic) NSString *statusDescription; // ivar: _statusDescription


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initStatusCode:(int)arg0 statusDescription:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif