// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHLANGUAGENODECOLLECTION_H
#define PGGRAPHLANGUAGENODECOLLECTION_H

@class NSSet;


#import "PGGraphNodeCollection.h"

@interface PGGraphLanguageNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) NSSet *locales;


+(Class)nodeClass;
+(id)nodesWithLocaleIdentifiers:(id)arg0 inGraph:(id)arg1 ;


@end


#endif