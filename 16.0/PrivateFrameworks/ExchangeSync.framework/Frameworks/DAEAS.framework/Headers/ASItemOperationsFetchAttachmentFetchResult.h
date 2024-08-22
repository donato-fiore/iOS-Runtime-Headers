// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASITEMOPERATIONSFETCHATTACHMENTFETCHRESULT_H
#define ASITEMOPERATIONSFETCHATTACHMENTFETCHRESULT_H

@class NSString, NSNumber;


#import "ASItem.h"
#import "ASItemOperationsFetchAttachmentProperties.h"

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem

@property (retain, nonatomic) NSString *fileReference; // ivar: _fileReference
@property (retain, nonatomic) ASItemOperationsFetchAttachmentProperties *properties; // ivar: _properties
@property (retain, nonatomic) NSNumber *status; // ivar: _status


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;


@end


#endif