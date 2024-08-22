// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCSSSELECTOR_H
#define IKCSSSELECTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IKCSSSelector : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSString *stringValue;
@property NSInteger type; // ivar: _type


-(id)description;


@end


#endif