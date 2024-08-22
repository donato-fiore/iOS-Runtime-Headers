// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETCONTENTDATASOURCECHANGEDETAILS_H
#define SHSHEETCONTENTDATASOURCECHANGEDETAILS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SHSheetContentDataSourceChangeDetails : NSObject

@property (nonatomic) BOOL airDropBadgeChanged; // ivar: _airDropBadgeChanged
@property (nonatomic) BOOL animateDifferences; // ivar: _animateDifferences
@property (nonatomic) BOOL forceReload; // ivar: _forceReload
@property (nonatomic) BOOL insertedPeople; // ivar: _insertedPeople
@property (copy, nonatomic) NSArray *modifiedIdentifiers; // ivar: _modifiedIdentifiers
@property (nonatomic) BOOL sectionsChanged; // ivar: _sectionsChanged
@property (nonatomic) BOOL snapshotChanged; // ivar: _snapshotChanged


-(id)description;


@end


#endif