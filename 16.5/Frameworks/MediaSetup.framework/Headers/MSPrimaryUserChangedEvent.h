// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPRIMARYUSERCHANGEDEVENT_H
#define MSPRIMARYUSERCHANGEDEVENT_H


#import <Foundation/Foundation.h>


@interface MSPrimaryUserChangedEvent : NSObject

@property (nonatomic) BOOL changedToHomeOwner; // ivar: _changedToHomeOwner
@property (nonatomic) BOOL changedToUserNotInHome; // ivar: _changedToUserNotInHome
@property (nonatomic) BOOL isAutomatic; // ivar: _isAutomatic


-(id)initWithAccessory:(id)arg0 ;


@end


#endif