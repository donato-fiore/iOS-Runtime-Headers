// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUVOICESELECTIONDATAMANAGER_H
#define HUVOICESELECTIONDATAMANAGER_H

@class SUICVoiceSelectionDefaultDataManager, NSString, NSArray;



@interface HUVoiceSelectionDataManager : SUICVoiceSelectionDefaultDataManager

@property (copy, nonatomic) NSString *inputLanguageCode; // ivar: _inputLanguageCode
@property (retain, nonatomic) NSArray *listOfVoices; // ivar: _listOfVoices


-(id)initWithInputLanguageCode:(id)arg0 listOfVoices:(id)arg1 ;
-(id)voicesForRecognitionLanguageCode:(id)arg0 outputLanguageCode:(id)arg1 ;


@end


#endif