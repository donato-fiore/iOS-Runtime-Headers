// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSCONTAINER_H
#define NMSCONTAINER_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface NMSContainer : NSObject

@property (retain, nonatomic) NSNumber *addedDate; // ivar: _addedDate
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSNumber *persistentID; // ivar: _persistentID
@property (retain, nonatomic) NSNumber *playedDate; // ivar: _playedDate
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithPersistentID:(id)arg0 name:(id)arg1 type:(NSUInteger)arg2 ;


@end


#endif