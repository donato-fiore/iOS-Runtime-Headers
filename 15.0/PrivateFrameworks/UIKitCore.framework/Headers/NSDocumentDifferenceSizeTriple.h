// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDOCUMENTDIFFERENCESIZETRIPLE_H
#define NSDOCUMENTDIFFERENCESIZETRIPLE_H


#import <Foundation/Foundation.h>

#import "NSDocumentDifferenceSize.h"

@interface NSDocumentDifferenceSizeTriple : NSObject

@property (readonly, nonatomic) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving; // ivar: _betweenPreservingPreviousVersionAndSaving
@property (readonly, nonatomic) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving; // ivar: _betweenPreviousSavingAndSaving
@property (readonly, nonatomic) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving; // ivar: _dueToRecentChangesBeforeSaving


-(id)description;
-(id)init;


@end


#endif