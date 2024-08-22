// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSIMPLERUNTIMEMANAGER_H
#define AXSIMPLERUNTIMEMANAGER_H


#import <Foundation/Foundation.h>


@interface AXSimpleRuntimeManager : NSObject

@property (copy, nonatomic) id *applicationElementCallback; // ivar: _applicationElementCallback
@property (copy, nonatomic) id *attributeCallback; // ivar: _attributeCallback
@property (copy, nonatomic) id *clientObserverCallback; // ivar: _clientObserverCallback
@property (copy, nonatomic) id *hitTestCallback; // ivar: _hitTestCallback
@property (copy, nonatomic) id *outgoingValuePreprocessor; // ivar: _outgoingValuePreprocessor
@property (copy, nonatomic) id *parameterizedAttributeCallback; // ivar: _parameterizedAttributeCallback
@property (copy, nonatomic) id *performActionCallback; // ivar: _performActionCallback
@property (copy, nonatomic) id *setAttributeCallback; // ivar: _setAttributeCallback
@property (nonatomic) BOOL started; // ivar: _started
@property (nonatomic) BOOL systemWideServer; // ivar: _systemWideServer


+(id)sharedManager;
-(void)start;


@end


#endif