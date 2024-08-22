// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMRESULT_H
#define IMRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface IMResult : NSObject

@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSError *inError; // ivar: _inError
@property (retain, nonatomic) id *inValue; // ivar: _inValue
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) id *value;


-(id)initWithError:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 value:(id)arg1 error:(id)arg2 ;
-(id)initWithSuccess:(id)arg0 ;


@end


#endif