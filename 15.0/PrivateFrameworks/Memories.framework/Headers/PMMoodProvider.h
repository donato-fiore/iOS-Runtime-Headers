// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMMOODPROVIDER_H
#define PMMOODPROVIDER_H

@class NSArray, NSMutableArray, NSString;
@protocol PMSliderProviderProtocol, PMEditProviderDelegate;

#import <Foundation/Foundation.h>

#import "VEKProduction.h"

@interface PMMoodProvider : NSObject <PMSliderProviderProtocol>



@property (retain, nonatomic) NSArray *blueprintNames; // ivar: _blueprintNames
@property (retain, nonatomic) NSMutableArray *blueprints; // ivar: _blueprints
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMEditProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (nonatomic) NSUInteger selectedIndex;
@property (readonly) Class superclass;


-(NSUInteger)numberOfItems;
-(id)customBlueprint;
-(id)displayNameForIndex:(NSUInteger)arg0 ;
-(id)initWithProduction:(id)arg0 ;
-(void)setCustomBlueprint:(id)arg0 ;
-(void)willBeginScrolling;


@end


#endif