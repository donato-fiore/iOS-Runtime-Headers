// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMLAZYMAP_H
#define EDAMLAZYMAP_H

@class NSDictionary, NSSet;


#import "FATObject.h"

@interface EDAMLazyMap : FATObject

@property (retain, nonatomic) NSDictionary *fullMap; // ivar: _fullMap
@property (retain, nonatomic) NSSet *keysOnly; // ivar: _keysOnly


+(id)structFields;
+(id)structName;


@end


#endif