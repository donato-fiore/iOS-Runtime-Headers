// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRELLOBOARD_H
#define WFTRELLOBOARD_H

@class NSURL, NSString;


#import "WFTrelloObject.h"

@interface WFTrelloBoard : WFTrelloObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL closed; // ivar: _closed
@property (readonly, nonatomic) NSString *itemDescription; // ivar: _itemDescription


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif