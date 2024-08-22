// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFRAUDREPORTRESPONSE_H
#define AMSFRAUDREPORTRESPONSE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSFraudReportResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *c; // ivar: _c
@property (retain, nonatomic) NSString *nameSpace; // ivar: _nameSpace
@property (nonatomic) NSInteger newScore; // ivar: _newScore
@property (nonatomic) NSInteger reportedScore; // ivar: _reportedScore
@property (retain, nonatomic) NSString *s; // ivar: _s


-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithURLResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif