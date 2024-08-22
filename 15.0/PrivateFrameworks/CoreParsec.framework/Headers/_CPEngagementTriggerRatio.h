// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPENGAGEMENTTRIGGERRATIO_H
#define _CPENGAGEMENTTRIGGERRATIO_H

@class PBCodable, NSString, NSData;
@protocol _CPEngagementTriggerRatio, NSSecureCoding;



@interface _CPEngagementTriggerRatio : PBCodable <_CPEngagementTriggerRatio, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float go; // ivar: _go
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) float tap; // ivar: _tap
@property (nonatomic) int totalEngagements; // ivar: _totalEngagements


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif