// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLHIGHLIGHTHIERARCHY_H
#define PLHIGHLIGHTHIERARCHY_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PLHighlightHierarchy : NSObject

@property (readonly, nonatomic) NSMutableSet *dayGroupHighlights; // ivar: _dayGroupHighlights
@property (readonly, nonatomic) NSMutableSet *dayHighlights; // ivar: _dayHighlights
@property (readonly, nonatomic) NSMutableSet *moments; // ivar: _moments


-(id)init;
-(void)_addDayHighlight:(id)arg0 ;
-(void)_addMoment:(id)arg0 ;
-(void)addDayGroupHighlight:(id)arg0 ;
-(void)addDayHighlight:(id)arg0 ;
-(void)addMoment:(id)arg0 ;


@end


#endif