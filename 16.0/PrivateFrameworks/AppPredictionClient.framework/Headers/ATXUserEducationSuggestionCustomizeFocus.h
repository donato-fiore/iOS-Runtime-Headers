// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONCUSTOMIZEFOCUS_H
#define ATXUSEREDUCATIONSUGGESTIONCUSTOMIZEFOCUS_H



#import "ATXUserEducationSuggestion.h"

@interface ATXUserEducationSuggestionCustomizeFocus : ATXUserEducationSuggestion

@property (readonly, nonatomic) NSInteger modeSemanticType; // ivar: _modeSemanticType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModeSemanticType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif