// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSSQLITERESULTROW_H
#define BSSQLITERESULTROW_H

@class NSArray, NSString;
@protocol BSInvalidatable, NSCopying;

#import <Foundation/Foundation.h>


@interface BSSqliteResultRow : NSObject <BSInvalidatable, NSCopying>

 {
    *sqlite3_stmt _statement;
    NSArray *_columnNames;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(CGFloat)doubleAtIndex:(NSUInteger)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(NSInteger)integerAtIndex:(NSUInteger)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataAtIndex:(NSUInteger)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)init;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringAtIndex:(NSUInteger)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)invalidate;


@end


#endif