// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMNOTECOLLECTIONCOUNTS_H
#define EDAMNOTECOLLECTIONCOUNTS_H

@class NSDictionary, NSNumber;


#import "FATObject.h"

@interface EDAMNoteCollectionCounts : FATObject

@property (retain, nonatomic) NSDictionary *notebookCounts; // ivar: _notebookCounts
@property (retain, nonatomic) NSDictionary *tagCounts; // ivar: _tagCounts
@property (retain, nonatomic) NSNumber *trashCount; // ivar: _trashCount


+(id)structFields;
+(id)structName;


@end


#endif