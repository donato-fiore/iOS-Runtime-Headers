// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKAGGREGATESEARCHTARGETPROVIDER_H
#define TSKAGGREGATESEARCHTARGETPROVIDER_H

@class NSString, NSArray;
@protocol TSKSearchTargetProvider;

#import <Foundation/Foundation.h>


@interface TSKAggregateSearchTargetProvider : NSObject <TSKSearchTargetProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *searchTargetProviders; // ivar: _searchTargetProviders
@property (readonly) Class superclass;


-(NSUInteger)nextRootSearchTargetIndexFromIndex:(NSUInteger)arg0 forString:(id)arg1 options:(NSUInteger)arg2 inDirection:(NSUInteger)arg3 ;
-(NSUInteger)p_firstTargetIndexForProvider:(id)arg0 ;
-(NSUInteger)rootSearchTargetCountThroughIndex:(NSUInteger)arg0 ;
-(id)initWithSearchTargetProviders:(id)arg0 ;
-(void)dealloc;
-(void)p_enumerateTargetProvidersFromTargetIndex:(NSUInteger)arg0 direction:(NSUInteger)arg1 action:(id)arg2 ;
-(void)withRootSearchTargetAtIndex:(NSUInteger)arg0 executeBlock:(id)arg1 ;


@end


#endif