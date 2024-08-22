// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPPERFORMENTITYQUERYCOMMANDFORFEEDBACK_H
#define _CPPERFORMENTITYQUERYCOMMANDFORFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPPerformEntityQueryCommandForFeedback, NSSecureCoding;



@interface _CPPerformEntityQueryCommandForFeedback : PBCodable <_CPPerformEntityQueryCommandForFeedback, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tokenString; // ivar: _tokenString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif