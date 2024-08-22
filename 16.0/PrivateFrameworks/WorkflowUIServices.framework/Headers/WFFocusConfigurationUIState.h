// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFOCUSCONFIGURATIONUISTATE_H
#define WFFOCUSCONFIGURATIONUISTATE_H

@class LNAction, WFContextualAction, LNDisplayRepresentation;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFFocusConfigurationUIState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) WFContextualAction *contextualAction; // ivar: _contextualAction
@property (readonly, copy, nonatomic) LNDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL isUIValid; // ivar: _isUIValid
@property (readonly, nonatomic) BOOL isValid;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabled:(BOOL)arg0 uiValidity:(BOOL)arg1 action:(id)arg2 displayRepresentation:(id)arg3 ;
-(id)initWithEnabled:(BOOL)arg0 uiValidity:(BOOL)arg1 contextualAction:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif