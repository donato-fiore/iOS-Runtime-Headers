// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPROPERTYVALUE_H
#define CLPROPERTYVALUE_H


#import <Foundation/Foundation.h>


@interface CLPropertyValue : NSObject

@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (readonly, retain, nonatomic) id *value; // ivar: _value


-(id)initWithValue:(id)arg0 dirty:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif