// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKRESOLVER_H
#define FBKRESOLVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FBKResolver : NSObject

@property (readonly) NSArray *arguments; // ivar: _arguments


+(id)name;
+(id)resolverForName:(id)arg0 ;
+(id)resolverForName:(id)arg0 arguments:(id)arg1 ;
+(id)resolverForQuestion:(id)arg0 ;
-(NSInteger)expectedArguments;
-(id)run;


@end


#endif