// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3SORTMAPFAULTINGNAMEORDERDICTIONARY_H
#define ML3SORTMAPFAULTINGNAMEORDERDICTIONARY_H

@class NSMutableDictionary;


#import "ML3DatabaseConnection.h"

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}




-(NSUInteger)count;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif