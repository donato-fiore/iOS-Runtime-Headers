// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSTRINGPAIR_H
#define AVSTRINGPAIR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVStringPair : NSObject

@property (readonly, nonatomic) NSString *first; // ivar: _first
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *second; // ivar: _second
@property (readonly, nonatomic) NSString *value;


-(BOOL)keyEquals:(id)arg0 ;
-(id)initWithString:(id)arg0 separatedByString:(id)arg1 ;


@end


#endif