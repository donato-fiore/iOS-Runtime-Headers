// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHNAMEDLOCATIONNODECOLLECTION_H
#define PGGRAPHNAMEDLOCATIONNODECOLLECTION_H

@class NSArray;


#import "PGGraphLocationNodeCollection.h"

@interface PGGraphNamedLocationNodeCollection : PGGraphLocationNodeCollection

@property (readonly, nonatomic) NSArray *names;


+(Class)nodeClass;
+(id)locationNodeWithName:(id)arg0 inGraph:(id)arg1 ;


@end


#endif