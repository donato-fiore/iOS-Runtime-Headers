// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSFRAUDREPORTRESPONSE_H
#define AMSFRAUDREPORTRESPONSE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSFraudReportResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *evaluatedElement; // ivar: _evaluatedElement
@property (retain, nonatomic) NSString *finalizedElement; // ivar: _finalizedElement
@property (retain, nonatomic) NSString *keyID; // ivar: _keyID
@property (retain, nonatomic) NSString *nameSpace; // ivar: _nameSpace
@property (nonatomic) NSInteger newScore; // ivar: _newScore
@property (retain, nonatomic) NSString *proof; // ivar: _proof
@property (nonatomic) NSInteger reportedScore; // ivar: _reportedScore


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 keyID:(id)arg1 ;
-(id)initWithURLResult:(id)arg0 keyID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif