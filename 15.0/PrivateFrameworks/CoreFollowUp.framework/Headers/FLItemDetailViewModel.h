// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLITEMDETAILVIEWMODEL_H
#define FLITEMDETAILVIEWMODEL_H

@class NSArray, NSSet, NSString;
@protocol FLViewModel;

#import <Foundation/Foundation.h>

#import "FLFollowUpController.h"
#import "FLItemChangeObserver.h"

@interface FLItemDetailViewModel : NSObject <FLViewModel>

 {
    NSArray *_originalItems;
    NSSet *_originalItemIdentifiers;
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allPendingItems;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)setItemChangeHandler:(id)arg0 ;


@end


#endif