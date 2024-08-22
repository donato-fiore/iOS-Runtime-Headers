// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYOBJECTCHANGESET_H
#define SYOBJECTCHANGESET_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface SYObjectChangeSet : NSObject

@property (copy, nonatomic) NSMutableSet *added; // ivar: _added
@property (copy, nonatomic) NSMutableSet *deleted; // ivar: _deleted
@property (copy, nonatomic) NSMutableSet *updated; // ivar: _updated


-(id)changesBetween:(id)arg0 and:(id)arg1 ;
-(id)init;
-(id)initWithChangesBetween:(id)arg0 and:(id)arg1 ;
-(void)applyToStore:(id)arg0 ;


@end


#endif