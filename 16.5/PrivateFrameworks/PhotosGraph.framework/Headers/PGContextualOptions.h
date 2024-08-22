// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCONTEXTUALOPTIONS_H
#define PGCONTEXTUALOPTIONS_H

@class NSArray, NSDate, NSDateComponents;

#import <Foundation/Foundation.h>


@interface PGContextualOptions : NSObject {
    NSArray *_contextualRules;
}


@property (retain, nonatomic) NSDate *localToday; // ivar: _localToday
@property (retain, nonatomic) NSDateComponents *localTodayComponents; // ivar: _localTodayComponents


-(id)availableContextualRules;
-(id)initWithGraph:(id)arg0 photoLibrary:(id)arg1 curationManager:(id)arg2 options:(id)arg3 loggingConnection:(id)arg4 ;


@end


#endif