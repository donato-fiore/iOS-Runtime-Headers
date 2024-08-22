// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGEDIRECTORYCONTENTS_H
#define IMMESSAGEDIRECTORYCONTENTS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "IMCombinedDirectoryContents.h"
#import "IMDirectoryContents.h"

@interface IMMessageDirectoryContents : NSObject

@property (readonly, nonatomic) IMCombinedDirectoryContents *allDirectoryContents; // ivar: _allDirectoryContents
@property (readonly, nonatomic) NSArray *directoryContents; // ivar: _directoryContents
@property (readonly, nonatomic) IMDirectoryContents *messagesDirectoryContents; // ivar: _messagesDirectoryContents
@property (readonly, nonatomic) IMDirectoryContents *metaDataDirectoryContents; // ivar: _metaDataDirectoryContents
@property (nonatomic) BOOL needsGathering; // ivar: _needsGathering


-(BOOL)gatherIfNeeded;
-(id)init;
-(void)gather;


@end


#endif