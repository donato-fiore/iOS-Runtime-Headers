// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIBRARYSECTIONCONTROLLER_H
#define LIBRARYSECTIONCONTROLLER_H

@class NSArray, UIViewController, NSString;
@protocol LibraryContentObserver;

#import <Foundation/Foundation.h>

#import "LibraryConfiguration.h"

@interface LibrarySectionController : NSObject

@property (readonly, nonatomic) LibraryConfiguration *configuration; // ivar: _configuration
@property (weak) NSObject<LibraryContentObserver> *contentObserver; // ivar: _contentObserver
@property (readonly, nonatomic) NSArray *filteredItemControllers;
@property (readonly, nonatomic) NSArray *itemControllers; // ivar: _itemControllers
@property (weak) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithConfiguration:(id)arg0 ;
-(void)contentDidChange;
-(void)registerItemsWithRegistration:(id)arg0 ;
-(void)updateToolbarIfNeeded;


@end


#endif