// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMUTABLELISTDATA_H
#define STMUTABLELISTDATA_H

@class NSString, NSArray;
@protocol STMutableStatusDomainData, STMutableStatusDomainDataDifferencing;


#import "STListData.h"

@interface STMutableListData : STListData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *objects;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)removeAllOccurrencesOfObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif