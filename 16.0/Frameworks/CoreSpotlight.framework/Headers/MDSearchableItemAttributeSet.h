// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDSEARCHABLEITEMATTRIBUTESET_H
#define MDSEARCHABLEITEMATTRIBUTESET_H

@class NSArray;


#import "CSSearchableItemAttributeSet.h"

@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet

@property (copy) NSArray *authorPersons;
@property (copy) NSArray *primaryRecipientPersons;
@property (copy) NSArray *recipients;


+(BOOL)supportsSecureCoding;


@end


#endif