// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONPARAMETERSUMMARY_H
#define WFACTIONPARAMETERSUMMARY_H

@class NSArray, NSString;
@protocol WFPropertyListObject;

#import <Foundation/Foundation.h>

#import "WFAction.h"

@interface WFActionParameterSummary : NSObject

@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSObject<WFPropertyListObject> *definition; // ivar: _definition
@property (readonly, copy, nonatomic) NSArray *possibleValues; // ivar: _possibleValues
@property (readonly, copy, nonatomic) NSString *singleFormatString; // ivar: _singleFormatString
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)explodedPossibleValuesForLocalization;
-(id)explodedPossibleValuesForLocalizationWithParameterReplacements;
-(id)explodedSummaryStringWithKey:(id)arg0 value:(id)arg1 ;
-(id)initWithAction:(id)arg0 definition:(id)arg1 ;
-(id)initWithAction:(id)arg0 definition:(id)arg1 title:(id)arg2 ;
-(id)localizedFormatString;
-(id)localizedTitle;
-(id)parameterReplacedString:(id)arg0 withOverrides:(id)arg1 ;
-(id)placeholderForKey:(id)arg0 ;
-(id)possibleValuesFromDictionary:(id)arg0 ;


@end


#endif