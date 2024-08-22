// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSAPSESSIONSIGNDATAOPERATION_H
#define ICSAPSESSIONSIGNDATAOPERATION_H

@class NSData;


#import "ICSAPSessionAbstractOperation.h"

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation

@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)executeWithSAPContext:(id)arg0 ;
-(void)finishWithSAPContextPreparationError:(id)arg0 ;


@end


#endif