// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BKSEVENTFOCUSCHANGEOBSERVERINFO_H
#define _BKSEVENTFOCUSCHANGEOBSERVERINFO_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger propertyUpdateGeneration; // ivar: _propertyUpdateGeneration
@property (readonly) Class superclass;
@property (getter=isValid) BOOL valid; // ivar: _valid


-(id)init;
-(void)invalidate;


@end


#endif