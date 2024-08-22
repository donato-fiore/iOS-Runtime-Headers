// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSBINDINGINFO_H
#define VSBINDINGINFO_H

@class NSString, NSDictionary, NSValueTransformer;

#import <Foundation/Foundation.h>


@interface VSBindingInfo : NSObject

@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) id *unsafeObservedObject; // ivar: _unsafeObservedObject
@property (retain, nonatomic) id *value;
@property (retain, nonatomic) NSValueTransformer *valueTransformer; // ivar: _valueTransformer
@property (readonly, weak, nonatomic) id *weakObservedObject; // ivar: _weakObservedObject


-(id)init;
-(id)initWithObservedObject:(id)arg0 keyPath:(id)arg1 options:(id)arg2 ;
-(void)requireExpectedConcurrency;


@end


#endif