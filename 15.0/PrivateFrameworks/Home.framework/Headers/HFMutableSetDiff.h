// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMUTABLESETDIFF_H
#define HFMUTABLESETDIFF_H



#import "HFSetDiff.h"

@interface HFMutableSetDiff : HFSetDiff

@property (readonly, nonatomic) BOOL hasChanges; // ivar: _hasChanges


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFromSet:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_updateHasChanges;
-(void)addObject:(id)arg0 ;
-(void)addObjects:(id)arg0 ;
-(void)deleteAllObjects;
-(void)deleteObject:(id)arg0 ;
-(void)deleteObjects:(id)arg0 ;
-(void)updateObject:(id)arg0 ;
-(void)updateObjects:(id)arg0 ;


@end


#endif