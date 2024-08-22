// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LANGUAGEOPTION_H
#define LANGUAGEOPTION_H

@class INObject, NSString, NSNumber;



@interface LanguageOption : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSNumber *isActive;
@property (nonatomic, copy) NSString *languageIdentifier;
@property (nonatomic, copy) NSString *languageTag;
@property (nonatomic, copy) NSString *name;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif