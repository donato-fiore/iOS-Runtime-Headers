// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSQLITEROW_H
#define WBSSQLITEROW_H


#import <Foundation/Foundation.h>


@interface WBSSQLiteRow : NSObject {
    *sqlite3_stmt _handle;
}




-(BOOL)_isNullAtIndex:(NSUInteger)arg0 ;
-(BOOL)boolAtIndex:(NSUInteger)arg0 ;
-(CGFloat)doubleAtIndex:(NSUInteger)arg0 ;
-(NSInteger)int64AtIndex:(NSUInteger)arg0 ;
-(id)dataAtIndex:(NSUInteger)arg0 ;
-(id)debugDictionaryRepresentationWithStatement:(id)arg0 ;
-(id)init;
-(id)initWithCurrentRowOfEnumerator:(id)arg0 ;
-(id)initWithStatement:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)stringAtIndex:(NSUInteger)arg0 ;
-(id)uncopiedDataAtIndex:(NSUInteger)arg0 ;
-(int)intAtIndex:(NSUInteger)arg0 ;
-(struct RawData )uncopiedRawDataAtIndex:(NSUInteger)arg0 ;


@end


#endif