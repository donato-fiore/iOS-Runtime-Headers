// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIOPENURLCONTEXT_H
#define UIOPENURLCONTEXT_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "UISceneOpenURLOptions.h"

@interface UIOpenURLContext : NSObject

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSDictionary *URLOptionsDictionary;
@property (readonly, nonatomic) UISceneOpenURLOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSDictionary *optionsDictionary;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;


@end


#endif