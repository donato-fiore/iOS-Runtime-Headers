// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTILINGDATASOURCE_H
#define PUTILINGDATASOURCE_H

@class NSHashTable, NSString;

#import <Foundation/Foundation.h>


@interface PUTilingDataSource : NSObject

@property (readonly, nonatomic) NSHashTable *_changeObservers; // ivar: __changeObservers
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(void)enumerateIndexPathsStartingAtIndexPath:(id)arg0 reverseDirection:(BOOL)arg1 usingBlock:(id)arg2 ;


@end


#endif