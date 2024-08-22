// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMCREATEORUPDATENOTEBOOKSHARESRESULT_H
#define EDAMCREATEORUPDATENOTEBOOKSHARESRESULT_H

@class NSArray, NSNumber;


#import "FATObject.h"

@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject

@property (retain, nonatomic) NSArray *matchingShares; // ivar: _matchingShares
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum


+(id)structFields;
+(id)structName;


@end


#endif