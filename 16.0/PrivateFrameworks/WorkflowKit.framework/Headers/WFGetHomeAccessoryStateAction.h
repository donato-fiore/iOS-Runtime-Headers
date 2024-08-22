// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGETHOMEACCESSORYSTATEACTION_H
#define WFGETHOMEACCESSORYSTATEACTION_H

@class NSString;
@protocol WFHomeManagerEventObserver;


#import "WFAction.h"

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) Class superclass;


+(id)homeAccessoryStateActionWithHome:(id)arg0 ;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)characteristic;
-(id)home;
-(id)homeName;
-(id)localizedAttribution;
-(id)localizedDefaultOutputName;
-(id)localizedDescriptionSummary;
-(id)localizedName;
-(id)outputContentClasses;
-(id)outputMeasurementUnitType;
-(void)dealloc;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateCharacteristicsEnumeration;


@end


#endif