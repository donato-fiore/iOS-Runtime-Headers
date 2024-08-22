// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFROOMSUGGESTION_H
#define HFROOMSUGGESTION_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface HFRoomSuggestion : NSObject

@property (readonly, copy, nonatomic) NSSet *aliases; // ivar: _aliases
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority


+(id)suggestionWithName:(id)arg0 priority:(NSInteger)arg1 ;
+(id)suggestionWithName:(id)arg0 priority:(NSInteger)arg1 aliases:(id)arg2 ;


@end


#endif