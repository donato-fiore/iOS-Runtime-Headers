// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSETTINGSTASK_H
#define WBSETTINGSTASK_H


#import <Foundation/Foundation.h>

#import "WBWebsiteDataRecord.h"

@interface WBSettingsTask : NSObject

@property (readonly, nonatomic) NSInteger taskType; // ivar: _taskType
@property (readonly, nonatomic) WBWebsiteDataRecord *websiteDataRecord; // ivar: _websiteDataRecord


+(id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg0 ;
+(id)taskWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 websiteDataRecord:(id)arg1 ;


@end


#endif