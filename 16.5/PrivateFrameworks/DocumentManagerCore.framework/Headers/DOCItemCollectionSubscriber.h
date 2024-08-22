// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCITEMCOLLECTIONSUBSCRIBER_H
#define DOCITEMCOLLECTIONSUBSCRIBER_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface DOCItemCollectionSubscriber : NSObject

@property (retain) NSUUID *UUID; // ivar: _UUID
@property (copy) id *updateBlock; // ivar: _updateBlock


-(id)initWithUpdateBlock:(id)arg0 ;


@end


#endif