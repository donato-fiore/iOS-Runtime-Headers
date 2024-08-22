// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSMARTFOLDERCREATIONDATA_H
#define ICASSMARTFOLDERCREATIONDATA_H

@class NSNumber, NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASFilterCondition.h"
#import "ICASFolderCreationApproach.h"

@interface ICASSmartFolderCreationData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfTags; // ivar: _countOfTags
@property (readonly, nonatomic) NSArray *enabledFiltersArray; // ivar: _enabledFiltersArray
@property (readonly, nonatomic) ICASFilterCondition *filterCondition; // ivar: _filterCondition
@property (readonly, nonatomic) ICASFolderCreationApproach *folderCreationApproach; // ivar: _folderCreationApproach


+(id)dataName;
-(id)initWithFolderCreationApproach:(id)arg0 countOfTags:(id)arg1 filterCondition:(id)arg2 enabledFiltersArray:(id)arg3 ;
-(id)toDict;


@end


#endif