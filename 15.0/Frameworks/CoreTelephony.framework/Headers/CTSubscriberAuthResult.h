// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSUBSCRIBERAUTHRESULT_H
#define CTSUBSCRIBERAUTHRESULT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSubscriberAuthResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *auts; // ivar: _auts
@property (retain, nonatomic) NSData *ck; // ivar: _ck
@property (retain, nonatomic) NSData *ik; // ivar: _ik
@property (retain, nonatomic) NSData *kc; // ivar: _kc
@property (retain, nonatomic) NSData *res; // ivar: _res
@property (retain, nonatomic) NSData *sres; // ivar: _sres


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif