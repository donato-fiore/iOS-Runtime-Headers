// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNTESTQUICKACTIONVIEWCONTAINER_H
#define CNTESTQUICKACTIONVIEWCONTAINER_H

@class NSDictionary, NSString, UITraitCollection;
@protocol CNContactQuickActionViewContainer;

#import <Foundation/Foundation.h>


@interface CNTestQuickActionViewContainer : NSObject <CNContactQuickActionViewContainer>



@property (readonly, nonatomic) NSDictionary *actionViewsByActionType; // ivar: _actionViewsByActionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;


-(id)initWithActionTypes:(id)arg0 ;
-(id)viewForActionType:(id)arg0 ;


@end


#endif