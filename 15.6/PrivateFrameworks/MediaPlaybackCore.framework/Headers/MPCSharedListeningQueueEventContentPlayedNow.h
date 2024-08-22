// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCSHAREDLISTENINGQUEUEEVENTCONTENTPLAYEDNOW_H
#define MPCSHAREDLISTENINGQUEUEEVENTCONTENTPLAYEDNOW_H

@class MPModelGenericObject, NSArray;

#import <Foundation/Foundation.h>


@interface MPCSharedListeningQueueEventContentPlayedNow : NSObject

@property (readonly, nonatomic) MPModelGenericObject *container; // ivar: _container
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) MPModelGenericObject *startItem; // ivar: _startItem


-(id)description;
-(id)initWithItems:(id)arg0 container:(id)arg1 startItem:(id)arg2 ;


@end


#endif