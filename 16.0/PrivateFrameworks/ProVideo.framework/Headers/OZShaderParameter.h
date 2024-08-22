// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZSHADERPARAMETER_H
#define OZSHADERPARAMETER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OZShaderParameter : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithName:(id)arg0 type:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif