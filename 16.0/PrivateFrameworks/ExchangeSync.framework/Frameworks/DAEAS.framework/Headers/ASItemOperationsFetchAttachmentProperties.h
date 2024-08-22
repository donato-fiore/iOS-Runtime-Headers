// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASITEMOPERATIONSFETCHATTACHMENTPROPERTIES_H
#define ASITEMOPERATIONSFETCHATTACHMENTPROPERTIES_H

@class NSString;


#import "ASItem.h"

@interface ASItemOperationsFetchAttachmentProperties : ASItem

@property (retain, nonatomic) NSString *attachmentContentType; // ivar: _attachmentContentType
@property (retain, nonatomic) NSString *data; // ivar: _data


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;


@end


#endif