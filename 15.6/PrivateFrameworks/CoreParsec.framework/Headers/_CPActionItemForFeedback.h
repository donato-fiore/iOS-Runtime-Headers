// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPACTIONITEMFORFEEDBACK_H
#define _CPACTIONITEMFORFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPActionItemForFeedback, NSSecureCoding;


#import "_CPPunchoutForFeedback.h"

@interface _CPActionItemForFeedback : PBCodable <_CPActionItemForFeedback, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _CPPunchoutForFeedback *punchout; // ivar: _punchout
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif