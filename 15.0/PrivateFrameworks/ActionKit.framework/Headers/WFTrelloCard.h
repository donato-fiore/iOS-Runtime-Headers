// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRELLOCARD_H
#define WFTRELLOCARD_H

@class NSURL, NSNumber, NSDate, NSString;


#import "WFTrelloObject.h"

@interface WFTrelloCard : WFTrelloObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSNumber *creationPosition; // ivar: _creationPosition
@property (readonly, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (readonly, nonatomic) NSString *itemDescription; // ivar: _itemDescription


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif