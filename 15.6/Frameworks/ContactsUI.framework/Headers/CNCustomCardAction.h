// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCUSTOMCARDACTION_H
#define CNCUSTOMCARDACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CNContactTargetActionWrapper.h"

@interface CNCustomCardAction : NSObject

@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic, getter=isDestructive) BOOL destructive; // ivar: _destructive
@property (readonly, nonatomic) id *menuProvider; // ivar: _menuProvider
@property (readonly, nonatomic) NSInteger placement; // ivar: _placement
@property (readonly, nonatomic) CNContactTargetActionWrapper *targetActionWrapper; // ivar: _targetActionWrapper
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(NSInteger)placementForGroup:(id)arg0 inContactContentViewController:(id)arg1 ;
+(id)groupForActionGivenPlacement:(NSInteger)arg0 inContactContentViewController:(id)arg1 ;
-(BOOL)isValidForContact:(id)arg0 ;
-(BOOL)matchesTarget:(id)arg0 selector:(SEL)arg1 group:(id)arg2 inContactContentViewController:(id)arg3 ;
-(id)initWithTitle:(id)arg0 targetActionWrapper:(id)arg1 contactIdentifier:(id)arg2 placement:(NSInteger)arg3 isDestructive:(BOOL)arg4 menuProvider:(id)arg5 ;


@end


#endif