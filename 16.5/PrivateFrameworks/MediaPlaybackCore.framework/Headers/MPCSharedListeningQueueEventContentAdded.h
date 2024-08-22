// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSHAREDLISTENINGQUEUEEVENTCONTENTADDED_H
#define MPCSHAREDLISTENINGQUEUEEVENTCONTENTADDED_H

@class MPModelGenericObject, NSArray;

#import <Foundation/Foundation.h>


@interface MPCSharedListeningQueueEventContentAdded : NSObject

@property (readonly, nonatomic) MPModelGenericObject *container; // ivar: _container
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


-(id)description;
-(id)initWithItems:(id)arg0 container:(id)arg1 ;


@end


#endif