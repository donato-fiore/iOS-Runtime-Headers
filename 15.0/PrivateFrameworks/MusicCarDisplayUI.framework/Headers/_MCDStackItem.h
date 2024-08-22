// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MCDSTACKITEM_H
#define _MCDSTACKITEM_H

@class NSString, NSIndexPath;

#import <Foundation/Foundation.h>


@interface _MCDStackItem : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath


+(id)stackItemWithContainer:(id)arg0 ;
-(id)description;


@end


#endif