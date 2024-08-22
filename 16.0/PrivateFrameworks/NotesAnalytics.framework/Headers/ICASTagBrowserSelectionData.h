// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASTAGBROWSERSELECTIONDATA_H
#define ICASTAGBROWSERSELECTIONDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASTagBrowserSelectionData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfSelectedTags; // ivar: _countOfSelectedTags
@property (readonly, nonatomic) NSNumber *isAllTagsSelected; // ivar: _isAllTagsSelected


+(id)dataName;
-(id)initWithCountOfSelectedTags:(id)arg0 isAllTagsSelected:(id)arg1 ;
-(id)toDict;


@end


#endif