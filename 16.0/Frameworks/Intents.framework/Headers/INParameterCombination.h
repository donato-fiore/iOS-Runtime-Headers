// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPARAMETERCOMBINATION_H
#define INPARAMETERCOMBINATION_H

@class NSString;
@protocol NSSecureCoding, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableLocalizationTable.h"

@interface INParameterCombination : NSObject <NSSecureCoding, INCodableCoding>



@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable; // ivar: _localizationTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedSubtitleFormatString;
@property (readonly, copy, nonatomic) NSString *localizedTitleFormatString;
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (copy, nonatomic) NSString *subtitleFormatString; // ivar: _subtitleFormatString
@property (copy, nonatomic) NSString *subtitleFormatStringLocID; // ivar: _subtitleFormatStringLocID
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBackgroundExecution; // ivar: _supportsBackgroundExecution
@property (copy, nonatomic) NSString *titleFormatString; // ivar: _titleFormatString
@property (copy, nonatomic) NSString *titleFormatStringLocID; // ivar: _titleFormatStringLocID


+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedSubtitleFormatStringWithLocalizer:(id)arg0 ;
-(id)localizedTitleFormatStringWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif