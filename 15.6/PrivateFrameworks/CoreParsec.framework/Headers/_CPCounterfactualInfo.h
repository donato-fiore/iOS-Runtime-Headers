// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPCOUNTERFACTUALINFO_H
#define _CPCOUNTERFACTUALINFO_H

@class PBCodable, NSString, NSData;
@protocol _CPCounterfactualInfo, NSSecureCoding;



@interface _CPCounterfactualInfo : PBCodable <_CPCounterfactualInfo, NSSecureCoding>



@property (nonatomic) BOOL cfDiffered; // ivar: _cfDiffered
@property (nonatomic) int cfError; // ivar: _cfError
@property (nonatomic) BOOL cfUsed; // ivar: _cfUsed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif