// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKSHAREDRESOURCE_H
#define TKSHAREDRESOURCE_H


#import <Foundation/Foundation.h>

#import "TKSharedResourceSlot.h"

@interface TKSharedResource : NSObject {
    TKSharedResourceSlot *_slot;
}


@property (readonly, nonatomic) id *object;


-(id)initWithSlot:(id)arg0 ;
-(void)dealloc;


@end


#endif