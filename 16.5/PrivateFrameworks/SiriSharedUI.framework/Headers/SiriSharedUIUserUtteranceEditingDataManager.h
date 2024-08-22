// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUIUSERUTTERANCEEDITINGDATAMANAGER_H
#define SIRISHAREDUIUSERUTTERANCEEDITINGDATAMANAGER_H

@class NSString, NSArray, NSMutableDictionary, AFUserUtterance;
@protocol SiriSharedUIUserUtteranceEditingDataManaging;

#import <Foundation/Foundation.h>


@interface SiriSharedUIUserUtteranceEditingDataManager : NSObject <SiriSharedUIUserUtteranceEditingDataManaging>

 {
    NSString *_refId;
    NSArray *_alternativeDisplayStrings;
    NSMutableDictionary *_userSelectionResultsMap;
    BOOL _clientAlternativePresented;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AFUserUtterance *userUtterance; // ivar: _userUtterance


-(BOOL)isEditedTextSameAsUtterance:(id)arg0 ;
-(NSInteger)numberOfAlternativeUtterances;
-(id)attributedStringAtIndex:(NSInteger)arg0 ;
-(id)initWithUserUtterance:(id)arg0 backingAceObjectRefId:(id)arg1 ;
-(id)selectionResultsForAlternateTextAtIndex:(NSInteger)arg0 ;
-(id)selectionResultsForEditedText:(id)arg0 ;
-(void)_createAlternativeDisplayStringsAndMap;
-(void)_updateSelectionResults:(id)arg0 interactionId:(id)arg1 ;


@end


#endif