// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDEFAULTHOMESCREENITEMUPDATE_H
#define ATXDEFAULTHOMESCREENITEMUPDATE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXDefaultWidgetStack.h"

@interface ATXDefaultHomeScreenItemUpdate : NSObject

@property (readonly, nonatomic) NSArray *extraLargeWidgets; // ivar: _extraLargeWidgets
@property (readonly, nonatomic) NSArray *largeWidgets; // ivar: _largeWidgets
@property (readonly, nonatomic) NSArray *mediumWidgets; // ivar: _mediumWidgets
@property (readonly, nonatomic) NSArray *onboardingStacks; // ivar: _onboardingStacks
@property (readonly, nonatomic) BOOL shouldSuggestStackInGallery; // ivar: _shouldSuggestStackInGallery
@property (readonly, nonatomic) NSArray *smallWidgets; // ivar: _smallWidgets
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack; // ivar: _stack
@property (readonly, nonatomic) ATXDefaultWidgetStack *todayStack; // ivar: _todayStack


-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStack:(id)arg0 todayStack:(id)arg1 onboardingStacks:(id)arg2 smallWidgets:(id)arg3 mediumWidgets:(id)arg4 largeWidgets:(id)arg5 extraLargeWidgets:(id)arg6 shouldSuggestStackInGallery:(BOOL)arg7 ;


@end


#endif