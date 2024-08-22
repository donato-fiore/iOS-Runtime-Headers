// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMDURATIONPROVIDER_H
#define PMDURATIONPROVIDER_H

@class NSString, NSArray;
@protocol PMSliderProviderProtocol, PMEditProviderDelegate;

#import <Foundation/Foundation.h>

#import "VEKProduction.h"

@interface PMDurationProvider : NSObject <PMSliderProviderProtocol>



@property (nonatomic) CGFloat currentDuration; // ivar: _currentDuration
@property (nonatomic) CGFloat customDuration; // ivar: _customDuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMEditProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *localizedDurations; // ivar: _localizedDurations
@property (nonatomic) CGFloat maxDuration; // ivar: _maxDuration
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;


-(NSUInteger)numberOfItems;
-(id)displayNameForIndex:(NSUInteger)arg0 ;
-(id)initWithProduction:(id)arg0 ;
-(void)updateLocalizedNames;
-(void)updateWithResult:(id)arg0 ;
-(void)willBeginScrolling;


@end


#endif