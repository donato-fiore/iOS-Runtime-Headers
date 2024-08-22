// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSINTERDEVICESWITCHEVENT_H
#define AXSSINTERDEVICESWITCHEVENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AXSSInterDeviceSwitchEvent : NSObject

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (nonatomic) BOOL isDown; // ivar: _isDown
@property (retain, nonatomic) NSArray *longPressActions; // ivar: _longPressActions
@property (copy, nonatomic) NSString *switchDisplayName; // ivar: _switchDisplayName
@property (copy, nonatomic) NSString *switchIdentifier; // ivar: _switchIdentifier


-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSwitchIdentifier:(id)arg0 switchDisplayName:(id)arg1 deviceIdentifier:(id)arg2 actions:(id)arg3 isDown:(BOOL)arg4 ;
-(id)initWithSwitchIdentifier:(id)arg0 switchDisplayName:(id)arg1 deviceIdentifier:(id)arg2 actions:(id)arg3 longPressActions:(id)arg4 isDown:(BOOL)arg5 ;


@end


#endif