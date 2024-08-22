// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPBUTTONFORFEEDBACK_H
#define _CPBUTTONFORFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPButtonForFeedback, NSSecureCoding;



@interface _CPButtonForFeedback : PBCodable <_CPButtonForFeedback, NSSecureCoding>



@property (copy, nonatomic) NSString *commandDetail; // ivar: _commandDetail
@property (nonatomic) int commandType; // ivar: _commandType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif