// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UINIBKEYVALUEPAIR_H
#define UINIBKEYVALUEPAIR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UINibKeyValuePair : NSObject

@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: keyPath
@property (readonly, nonatomic) id *object; // ivar: object
@property (readonly, nonatomic) id *value; // ivar: value


-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 value:(id)arg2 ;
-(void)apply;
-(void)applyForSimulator;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif