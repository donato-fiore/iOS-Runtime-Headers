// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPATTERNGLOBALDATA_H
#define SGPATTERNGLOBALDATA_H

@class NSDictionary, NSArray, NSHashTable, NSMutableSet;

#import <Foundation/Foundation.h>

#import "SGPatternDataFile.h"

@interface SGPatternGlobalData : NSObject {
    NSDictionary *patternDict;
    SGPatternDataFile *patternData;
    int globalLanguageVersion;
    NSArray *currentLanguages;
    NSHashTable *patternInstances;
    BOOL useAllLanguages;
    NSMutableSet *regexesImmuneToDeath;
}






@end


#endif