// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXRESOLVEDOBJECT_H
#define SXRESOLVEDOBJECT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "SXJSONObject.h"

@interface SXResolvedObject : NSObject

@property (readonly, copy, nonatomic) NSSet *conditionTypes; // ivar: _conditionTypes
@property (readonly, nonatomic) SXJSONObject *object; // ivar: _object


-(id)initWitObject:(id)arg0 conditionTypes:(id)arg1 ;


@end


#endif