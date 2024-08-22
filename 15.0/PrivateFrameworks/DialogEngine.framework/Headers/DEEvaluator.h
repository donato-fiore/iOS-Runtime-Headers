// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEEVALUATOR_H
#define DEEVALUATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEEvaluator : NSObject

@property (retain, nonatomic) id *globalParameters; // ivar: _globalParameters
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) id *parameters; // ivar: _parameters
@property (retain, nonatomic) NSString *propName; // ivar: _propName
@property (retain, nonatomic) NSString *templateDir; // ivar: _templateDir
@property (retain, nonatomic) NSString *typeName; // ivar: _typeName


-(id)evaluate;


@end


#endif