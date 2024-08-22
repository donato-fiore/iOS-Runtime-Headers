// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTVIEWPOSTPROCESSORMANAGER_H
#define SXCOMPONENTVIEWPOSTPROCESSORMANAGER_H

@class NSString, NSMutableArray;
@protocol SXComponentViewPostProcessorManager;

#import <Foundation/Foundation.h>


@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *processors; // ivar: _processors
@property (readonly) Class superclass;


-(id)init;
-(void)addProcessor:(id)arg0 ;
-(void)processComponent:(id)arg0 view:(id)arg1 ;
-(void)removeProcessor:(id)arg0 ;


@end


#endif