// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGETDIRECTIONSACTION_H
#define WFGETDIRECTIONSACTION_H

@class WFAction, NSString;
@protocol WFDynamicEnumerationDataSource, WFParameterEventObserver;



@interface WFGetDirectionsAction : WFAction <WFDynamicEnumerationDataSource, WFParameterEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)directionsModeFromString:(id)arg0 ;
+(id)localizedNameForDirectionsModeString:(id)arg0 ;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)appIdentifier;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)supportedDirectionsModesForAppName:(id)arg0 ;
-(void)getMapsURLForMapsLink:(id)arg0 appName:(id)arg1 completionHandler:(id)arg2 ;
-(void)getStartAddressWithCompletionHandler:(id)arg0 ;
-(void)initializeParameters;
-(void)openMapsLink:(id)arg0 inAppNamed:(id)arg1 ;
-(void)openMapsURL:(id)arg0 withAppIdentifier:(id)arg1 ;
-(void)parameterAttributesDidChange:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif