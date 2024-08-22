// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGWALLPAPERSUGGESTIONINFORMER_H
#define PGWALLPAPERSUGGESTIONINFORMER_H


#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGWallpaperSuggestionInformer : NSObject {
    PGManagerWorkingContext *_workingContext;
}




-(id)initWithWorkingContext:(id)arg0 ;
-(id)personLocalIdentifiersForTopPeople:(BOOL)arg0 ;


@end


#endif