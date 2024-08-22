// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHSUGGESTIONCONTROLLER_H
#define _UISEARCHSUGGESTIONCONTROLLER_H

@class NSArray;
@protocol _UISearchSuggestionControllerDelegate;

#import <Foundation/Foundation.h>


@interface _UISearchSuggestionController : NSObject

@property (weak, nonatomic) NSObject<_UISearchSuggestionControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(void)updateSuggestions:(id)arg0 userInitiated:(BOOL)arg1 ;


@end


#endif