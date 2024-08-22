// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFPITEM_H
#define CSFPITEM_H

@class FPItem, NSString;

#import <Foundation/Foundation.h>

#import "CSSearchableItem.h"

@interface CSFPItem : NSObject {
    FPItem *_internal;
}


@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;


+(id)itemWithFileURL:(id)arg0 ;
+(id)itemWithFileURL:(id)arg0 forEUID:(unsigned int)arg1 ;
-(id)initWithFPItem:(id)arg0 ;


@end


#endif