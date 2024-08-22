// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNDELEGATEADJUSTINGRESPONSEPREPARER_H
#define _CNDELEGATEADJUSTINGRESPONSEPREPARER_H

@class CNAutocompleteResponsePreparerDecorator;



@interface _CNDelegateAdjustingResponsePreparer : CNAutocompleteResponsePreparerDecorator



-(id)prepareResults:(id)arg0 ;
-(void)adjustArray:(id)arg0 byAddingResults:(id)arg1 ;
-(void)adjustArray:(id)arg0 byRemovingResults:(id)arg1 ;


@end


#endif