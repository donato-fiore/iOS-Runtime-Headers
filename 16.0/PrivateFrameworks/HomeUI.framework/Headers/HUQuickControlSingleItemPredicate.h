// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSINGLEITEMPREDICATE_H
#define HUQUICKCONTROLSINGLEITEMPREDICATE_H

@class NSString;
@protocol HUQuickControlItemPredicate;

#import <Foundation/Foundation.h>


@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumNumberOfMatches;
@property (readonly) Class superclass;


+(id)predicateWithControlItemClass:(Class)arg0 ;
-(BOOL)matchesControlItem:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)matchingControlItemsForControlItems:(id)arg0 ;


@end


#endif