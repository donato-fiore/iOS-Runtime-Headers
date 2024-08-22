// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPENGAGEMENTSHARERATIO_H
#define _CPENGAGEMENTSHARERATIO_H

@class PBCodable, NSString, NSData;
@protocol _CPEngagementShareRatio, NSSecureCoding;



@interface _CPEngagementShareRatio : PBCodable <_CPEngagementShareRatio, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float shareOfEngagements; // ivar: _shareOfEngagements
@property (nonatomic) float shareOfInternetEngagements; // ivar: _shareOfInternetEngagements
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif