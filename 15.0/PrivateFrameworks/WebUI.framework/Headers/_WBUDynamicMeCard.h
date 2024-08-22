// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WBUDYNAMICMECARD_H
#define _WBUDYNAMICMECARD_H

@class NSMutableArray, CNContact;

#import <Foundation/Foundation.h>


@interface _WBUDynamicMeCard : NSObject {
    NSMutableArray *_blocksPendingMeCard;
    CNContact *_me;
}


@property (readonly, nonatomic) BOOL meCardExists; // ivar: _meCardExists


+(id)_contactObjectComponentForString:(id)arg0 ;
-(id)init;
-(id)me;
-(id)valueForProperty:(id)arg0 contact:(id)arg1 ;
-(void)_meCardChanged:(id)arg0 ;
-(void)performWhenReady:(id)arg0 ;


@end


#endif