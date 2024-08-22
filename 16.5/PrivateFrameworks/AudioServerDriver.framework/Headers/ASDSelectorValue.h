// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDSELECTORVALUE_H
#define ASDSELECTORVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASDSelectorValue : NSObject

@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif