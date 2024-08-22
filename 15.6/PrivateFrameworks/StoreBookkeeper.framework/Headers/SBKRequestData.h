// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKREQUESTDATA_H
#define SBKREQUESTDATA_H


#import <Foundation/Foundation.h>

#import "SBKTransaction.h"

@interface SBKRequestData : NSObject

@property (retain, nonatomic) SBKTransaction *transaction; // ivar: _transaction


+(id)propertyListBodyWithTransaction:(id)arg0 ;
-(id)initWithTransaction:(id)arg0 ;
-(id)serializableRequestBodyPropertyList;


@end


#endif