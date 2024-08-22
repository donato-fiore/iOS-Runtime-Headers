// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMULTIQUEUEITEM_H
#define IMMULTIQUEUEITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMMultiQueueItem : NSObject

@property (readonly, nonatomic) NSString *GUID; // ivar: _GUID
@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSString *describer; // ivar: _describer


-(id)initWithBlock:(id)arg0 GUID:(id)arg1 description:(id)arg2 ;


@end


#endif