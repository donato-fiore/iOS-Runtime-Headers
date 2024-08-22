// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEWRAPPERMOREIVARS_H
#define NSFILEWRAPPERMOREIVARS_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSHashTable.h"
#import "NSError.h"

@interface NSFileWrapperMoreIVars : NSObject {
    NSURL *contentsURL;
    BOOL contentsMustBeReadWithoutMapping;
    BOOL attributesMustBeWrittenSoNoHardLinking;
    NSHashTable *parents;
    NSError *contentsLazyReadingError;
    NSDictionary *cachedDirectoryChildrenAsDictionary;
}






@end


#endif