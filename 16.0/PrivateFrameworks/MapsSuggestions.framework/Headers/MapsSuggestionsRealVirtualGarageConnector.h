// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSREALVIRTUALGARAGECONNECTOR_H
#define MAPSSUGGESTIONSREALVIRTUALGARAGECONNECTOR_H

@class NSString;
@protocol VGVirtualGarageObserver, MapsSuggestionsVirtualGarageConnector, MapsSuggestionsVirtualGarageConnectorDelegate;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRealVirtualGarageConnector : NSObject <VGVirtualGarageObserver, MapsSuggestionsVirtualGarageConnector>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MapsSuggestionsVirtualGarageConnectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(void)closeVGConnection;
-(void)fetchStateOfChargeForVehicleWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)fetchUnpairedVehiclesWithHandler:(id)arg0 ;
-(void)openVGConnection;
-(void)startObservingVG;
-(void)stopObservingVG;
-(void)virtualGarage:(id)arg0 didUpdateUnpairedVehicles:(id)arg1 ;
-(void)virtualGarageDidUpdate:(id)arg0 ;


@end


#endif