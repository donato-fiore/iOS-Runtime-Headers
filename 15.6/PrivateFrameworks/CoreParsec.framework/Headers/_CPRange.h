// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPRANGE_H
#define _CPRANGE_H

@class PBCodable, NSString, NSData;
@protocol _CPRange, NSSecureCoding;



@interface _CPRange : PBCodable <_CPRange, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger location; // ivar: _location
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif