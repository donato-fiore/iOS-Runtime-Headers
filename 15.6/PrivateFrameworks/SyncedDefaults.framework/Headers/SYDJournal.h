// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYDJOURNAL_H
#define SYDJOURNAL_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SYDJournal : NSObject {
    NSMutableDictionary *_store;
    NSMutableDictionary *_journal;
    BOOL _readonly;
}




-(BOOL)removeChangesUntilChangeCount:(NSInteger)arg0 ;
-(NSInteger)maximumChangeCount;
-(id)changesSinceChangeCount:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMutableStore:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(int)changeSinceChangeCount:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)addChange:(int)arg0 forKey:(id)arg1 changeCount:(NSInteger)arg2 ;


@end


#endif