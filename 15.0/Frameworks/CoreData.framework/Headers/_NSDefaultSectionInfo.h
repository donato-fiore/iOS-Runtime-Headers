// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSDEFAULTSECTIONINFO_H
#define _NSDEFAULTSECTIONINFO_H

@class NSArray, NSString;
@protocol NSFetchedResultsSectionInfo;

#import <Foundation/Foundation.h>

#import "NSFetchedResultsController.h"

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo>

 {
    NSFetchedResultsController *_controller;
    NSUInteger _sectionOffset;
    NSUInteger _oldSectionNumber;
    NSArray *_sectionObjects;
}


@property (readonly, nonatomic) NSString *indexTitle; // ivar: _indexTitle
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger numberOfObjects; // ivar: _numberOfObjects
@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) id *sectionId; // ivar: _sectionId


-(void)dealloc;


@end


#endif