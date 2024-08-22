// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIACLUSTERPREDICATE_H
#define OKMEDIACLUSTERPREDICATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OKMediaClusterPredicate : NSObject

@property (nonatomic) NSUInteger category; // ivar: _category
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(id)nameForCategory:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(float)efficiencyForItems:(id)arg0 ;
-(id)evaluateItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)init;
-(id)title;
-(void)dealloc;


@end


#endif