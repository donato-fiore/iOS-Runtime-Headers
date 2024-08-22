// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCANVASSELECTION_H
#define TSDCANVASSELECTION_H

@class NSSet, TSDDrawableInfo<TSDContainerInfo>, NSString;
@protocol TSDCanvasSelection, NSCopying;


#import "TSKSelection.h"

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying>

 {
    NSSet *mInfos;
}


@property (readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container; // ivar: mContainer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger infoCount;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unlockedInfoCount;
@property (readonly, nonatomic) NSSet *unlockedInfos;


+(id)emptySelection;
-(BOOL)containsKindOfClass:(Class)arg0 ;
-(BOOL)containsUnlockedKindOfClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyExcludingInfo:(id)arg0 ;
-(id)copyIncludingInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)infosOfClass:(Class)arg0 ;
-(id)initWithInfos:(id)arg0 ;
-(id)initWithInfos:(id)arg0 andContainer:(id)arg1 ;
-(void)dealloc;


@end


#endif