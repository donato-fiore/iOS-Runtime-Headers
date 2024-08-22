// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICONTAINERCONTEXT_H
#define CNUICONTAINERCONTEXT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface CNUIContainerContext : NSObject

@property (readonly, nonatomic) NSArray *addedContainers;
@property (retain, nonatomic) NSDictionary *originalContainers; // ivar: _originalContainers
@property (readonly, nonatomic) NSDictionary *removedContainers;
@property (retain, nonatomic) NSArray *selectedContainers; // ivar: _selectedContainers


-(id)initWithContainers:(id)arg0 ;
-(id)persistedContainers;
-(void)addContainer:(id)arg0 ;
-(void)removeContainer:(id)arg0 ;
-(void)resetToInitialState;


@end


#endif