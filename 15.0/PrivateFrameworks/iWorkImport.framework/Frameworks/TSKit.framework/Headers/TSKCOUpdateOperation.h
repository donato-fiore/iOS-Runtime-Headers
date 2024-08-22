// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCOUPDATEOPERATION_H
#define TSKCOUPDATEOPERATION_H

@class NSString;


#import "TSKCOAbstractOperation.h"

@interface TSKCOUpdateOperation : TSKCOAbstractOperation

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) ? propertyType; // ivar: _propertyType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAddress:(*void)arg0 propertyId:(unsigned short)arg1 noop:(BOOL)arg2 ;
-(id)initWithAddress:(*void)arg0 propertyType:(struct ? *)arg1 noop:(BOOL)arg2 ;
-(id)initWithUnarchiver:(id)arg0 message:(*void)arg1 ;
-(id)toString;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif