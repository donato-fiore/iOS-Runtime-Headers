// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSIZEDICT_H
#define STSIZEDICT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "STSizeVector.h"

@interface STSizeDict : NSObject

@property (readonly) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) STSizeVector *total;


-(id)get:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)plus:(id)arg0 ;
-(id)remapKeys:(id)arg0 removeMissing:(BOOL)arg1 ;


@end


#endif