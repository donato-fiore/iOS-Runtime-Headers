// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSLATIONRESULTITEM_H
#define TRANSLATIONRESULTITEM_H

@class INObject, NSString;



@interface TranslationResultItem : INObject

@property (nonatomic, copy) NSString *definition;
@property (nonatomic, copy) NSString *romanization;
@property (nonatomic, copy) NSString *translatedSantitizedText;
@property (nonatomic, copy) NSString *translatedText;
@property (nonatomic, copy) NSString *wordType;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif