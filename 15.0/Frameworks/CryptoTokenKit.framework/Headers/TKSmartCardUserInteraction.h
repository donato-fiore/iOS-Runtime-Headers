// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKSMARTCARDUSERINTERACTION_H
#define TKSMARTCARDUSERINTERACTION_H

@protocol NSSecureCoding, TKSmartCardUserInteractionDelegate;

#import <Foundation/Foundation.h>


@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>



@property (weak) NSObject<TKSmartCardUserInteractionDelegate> *delegate; // ivar: _delegate
@property CGFloat initialTimeout; // ivar: _initialTimeout
@property CGFloat interactionTimeout; // ivar: _interactionTimeout


+(BOOL)supportsSecureCoding;
-(BOOL)cancel;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runWithReply:(id)arg0 ;


@end


#endif