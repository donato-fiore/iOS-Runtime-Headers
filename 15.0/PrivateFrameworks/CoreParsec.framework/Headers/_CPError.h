// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPERROR_H
#define _CPERROR_H

@class PBCodable, NSString, NSData;
@protocol _CPError, NSSecureCoding;



@interface _CPError : PBCodable <_CPError, NSSecureCoding>



@property (nonatomic) CGFloat code; // ivar: _code
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif