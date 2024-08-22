// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTKSIMPLEKEY_H
#define TTKSIMPLEKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TTKSimpleKey : NSObject

@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) short keyCode; // ivar: _keyCode
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


-(id)initWithJsonDictionary:(id)arg0 ;
-(id)initWithString:(id)arg0 frame:(struct CGRect )arg1 keyCode:(short)arg2 ;
-(id)toJsonDictionary;


@end


#endif