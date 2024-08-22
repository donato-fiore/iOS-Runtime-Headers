// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSEARCHITUNESACTION_H
#define WFSEARCHITUNESACTION_H

@class WFAction, NSString;
@protocol WFDynamicEnumerationDataSource;



@interface WFSearchiTunesAction : WFAction <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)mediaType;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateParameterVisibility;


@end


#endif