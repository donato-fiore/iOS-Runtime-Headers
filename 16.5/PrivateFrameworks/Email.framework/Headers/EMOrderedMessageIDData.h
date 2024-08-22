// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMORDEREDMESSAGEIDDATA_H
#define EMORDEREDMESSAGEIDDATA_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface EMOrderedMessageIDData : NSObject

@property (copy, nonatomic) NSDictionary *objectIDByPersistentID; // ivar: _objectIDByPersistentID
@property (copy, nonatomic) NSArray *objectIDs; // ivar: _objectIDs


-(id)initWithObjectIDs:(id)arg0 objectIDByPersistentID:(id)arg1 ;


@end


#endif