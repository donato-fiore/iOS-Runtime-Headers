// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLINTERSILOSERVICEMOCKPAYLOAD_H
#define CLINTERSILOSERVICEMOCKPAYLOAD_H

@class XCTestExpectation, NSDictionary;

#import <Foundation/Foundation.h>


@interface CLIntersiloServiceMockPayload : NSObject

@property (readonly, nonatomic) XCTestExpectation *expectation; // ivar: _expectation
@property (nonatomic) BOOL inUse; // ivar: _inUse
@property (readonly, nonatomic) NSDictionary *inputDictionary; // ivar: _inputDictionary
@property (readonly, nonatomic) NSDictionary *outputDictionary; // ivar: _outputDictionary


-(id)initWithExpectation:(id)arg0 inputDictionary:(id)arg1 ;
-(void)setOutput:(id)arg0 forKey:(id)arg1 ;


@end


#endif