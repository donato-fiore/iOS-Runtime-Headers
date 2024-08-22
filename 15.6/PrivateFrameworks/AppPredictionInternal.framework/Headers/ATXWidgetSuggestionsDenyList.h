// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXWIDGETSUGGESTIONSDENYLIST_H
#define ATXWIDGETSUGGESTIONSDENYLIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXWidgetSuggestionsDenyList : NSObject {
    NSArray *_bannedWidgets;
}




-(BOOL)containsInfoSuggestion:(id)arg0 ;
-(id)init;
-(id)initWithAssets:(id)arg0 ;


@end


#endif