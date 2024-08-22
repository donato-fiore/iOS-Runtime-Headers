// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEENTITYSCORE_H
#define ATXMODEENTITYSCORE_H

@class NSDictionary, NSUUID;
@protocol NSSecureCoding, ATXModeEntityJsonProtocol;

#import <Foundation/Foundation.h>


@interface ATXModeEntityScore : NSObject <NSSecureCoding, ATXModeEntityJsonProtocol>



@property (retain, nonatomic) NSDictionary *featureVector; // ivar: _featureVector
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScore:(CGFloat)arg0 featureVector:(id)arg1 uuid:(id)arg2 ;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif