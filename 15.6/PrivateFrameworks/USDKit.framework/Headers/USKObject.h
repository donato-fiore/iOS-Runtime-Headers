// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USKOBJECT_H
#define USKOBJECT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "USKToken.h"
#import "USKObjectPath.h"

@interface USKObject : NSObject

@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, retain, nonatomic) USKToken *name; // ivar: _name
@property (readonly, retain, nonatomic) USKObjectPath *path; // ivar: _path




@end


#endif