// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDIDSINVITATION_H
#define HDIDSINVITATION_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface HDIDSInvitation : NSObject

@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) id *codableObject; // ivar: _codableObject
@property (readonly, copy, nonatomic) NSString *fromID; // ivar: _fromID


-(id)initWithUUID:(id)arg0 fromID:(id)arg1 codableObject:(id)arg2 ;


@end


#endif