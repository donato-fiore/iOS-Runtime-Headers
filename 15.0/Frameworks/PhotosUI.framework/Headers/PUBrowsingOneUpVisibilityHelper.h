// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBROWSINGONEUPVISIBILITYHELPER_H
#define PUBROWSINGONEUPVISIBILITYHELPER_H

@class NSString;
@protocol PUBrowsingViewModelChangeObserver;

#import <Foundation/Foundation.h>

#import "PUBrowsingViewModel.h"

@interface PUBrowsingOneUpVisibilityHelper : NSObject <PUBrowsingViewModelChangeObserver>



@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOneUpVisible; // ivar: _isOneUpVisible
@property (readonly, nonatomic) BOOL isPresentedForSecondScreen; // ivar: _isPresentedForSecondScreen
@property (readonly) Class superclass;


-(id)initWithBrowsingViewModel:(id)arg0 isPresentedForSecondScreen:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif