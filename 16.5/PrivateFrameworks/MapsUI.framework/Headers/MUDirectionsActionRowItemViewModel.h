// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUDIRECTIONSACTIONROWITEMVIEWMODEL_H
#define MUDIRECTIONSACTIONROWITEMVIEWMODEL_H

@class MKETAProvider, NSString;
@protocol MKETAProviderObserver;


#import "MUActionRowItemViewModel.h"

@interface MUDirectionsActionRowItemViewModel : MUActionRowItemViewModel <MKETAProviderObserver>

 {
    MKETAProvider *_etaProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEnabled;
-(id)accessibilityIdentifier;
-(id)analyticsButtonValue;
-(id)initWithETAProvider:(id)arg0 ;
-(id)preferredBackgroundColor;
-(id)preferredTintColor;
-(id)symbolName;
-(id)titleText;
-(void)ETAProviderUpdated:(id)arg0 ;


@end


#endif