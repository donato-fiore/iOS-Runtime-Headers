// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUIVIEWSTACK_H
#define SIRISHAREDUIVIEWSTACK_H

@class NSArray, UIView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering>, NSMutableOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriSharedUIViewStack : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *contentViews;
@property (readonly, nonatomic) UIView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering> *mostRecentlyAddedView;
@property (retain, nonatomic) NSMutableOrderedSet *mutableViews; // ivar: _mutableViews


-(BOOL)containsContentView:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentViews:(id)arg0 ;
-(id)nextViewAfterContentView:(id)arg0 ;
-(id)previousViewBeforeContentView:(id)arg0 ;
-(id)viewAtIndex:(NSInteger)arg0 ;
-(void)addContentView:(id)arg0 ;
-(void)removeContentView:(id)arg0 ;
-(void)reset;


@end


#endif