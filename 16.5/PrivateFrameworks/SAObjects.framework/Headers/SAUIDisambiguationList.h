// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIDISAMBIGUATIONLIST_H
#define SAUIDISAMBIGUATIONLIST_H

@class NSString, NSArray;


#import "SAAceView.h"
#import "SAUIDomainObjectPicker.h"

@interface SAUIDisambiguationList : SAAceView

@property (nonatomic) BOOL autoDisambiguationDisabled;
@property (copy, nonatomic) NSString *disambiguationKey;
@property (retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *selectionResponse;
@property (copy, nonatomic) NSString *speakableDelimiter;
@property (copy, nonatomic) NSString *speakableFinalDelimiter;
@property (copy, nonatomic) NSString *speakableSelectionResponse;
@property (copy, nonatomic) NSString *speakableSuffix;
@property (copy, nonatomic) NSString *title;


+(id)disambiguationList;
+(id)disambiguationListWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif