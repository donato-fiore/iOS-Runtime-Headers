// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPASTEBOARDITEM_H
#define WFPASTEBOARDITEM_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface WFPasteboardItem : NSObject

@property (readonly, nonatomic) NSArray *fileURLItems;
@property (readonly, nonatomic) NSArray *fileURLs; // ivar: _fileURLs
@property (readonly, nonatomic) NSDictionary *itemsByType; // ivar: _itemsByType


-(id)initWithItemsByType:(id)arg0 fileURLs:(id)arg1 ;


@end


#endif