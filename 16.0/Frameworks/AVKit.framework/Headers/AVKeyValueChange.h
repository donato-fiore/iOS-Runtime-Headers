// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVKEYVALUECHANGE_H
#define AVKEYVALUECHANGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVKeyValueChange : NSObject

@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) id *observationToken; // ivar: _observationToken
@property (readonly, nonatomic) id *oldValue; // ivar: _oldValue
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithValue:(id)arg0 oldValue:(id)arg1 keyPath:(id)arg2 observationToken:(id)arg3 ;


@end


#endif