// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPNATURALINPUTCOLLECTIONEVENT_H
#define RCPNATURALINPUTCOLLECTIONEVENT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RCPEventSenderProperties.h"

@interface RCPNaturalInputCollectionEvent : NSObject <NSCopying>



@property (readonly, copy) NSArray *manipulators; // ivar: _manipulators
@property (readonly, copy) NSArray *selections; // ivar: _selections
@property (readonly) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) NSUInteger timestamp; // ivar: _timestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithManipulators:(id)arg0 selections:(id)arg1 timestamp:(NSUInteger)arg2 senderProperties:(id)arg3 ;


@end


#endif