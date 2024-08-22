// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMSIZECACHEENTRY_H
#define STMSIZECACHEENTRY_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface STMSizeCacheEntry : NSObject {
    NSString *_itemPath;
}


@property (retain) id *item; // ivar: _item
@property (readonly) NSString *itemPath;
@property (retain) NSNumber *itemSize; // ivar: _itemSize
@property (copy) id *sizingBlock; // ivar: _sizingBlock
@property NSUInteger status; // ivar: _status


-(id)initWithContainer:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)calculateSize;


@end


#endif