// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSETTINGSTASKGETTERRESULT_H
#define ASSETTINGSTASKGETTERRESULT_H


#import <Foundation/Foundation.h>


@interface ASSettingsTaskGetterResult : NSObject

@property (nonatomic) int key; // ivar: _key
@property (retain, nonatomic) id *result; // ivar: _result
@property (nonatomic) NSInteger status; // ivar: _status


-(id)initWithKey:(int)arg0 status:(NSInteger)arg1 result:(id)arg2 ;


@end


#endif