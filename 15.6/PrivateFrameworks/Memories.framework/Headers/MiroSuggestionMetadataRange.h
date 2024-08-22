// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROSUGGESTIONMETADATARANGE_H
#define MIROSUGGESTIONMETADATARANGE_H



#import "MiroMetadataRange.h"
#import "VEKSuggestion.h"

@interface MiroSuggestionMetadataRange : MiroMetadataRange

@property (retain, nonatomic) VEKSuggestion *suggestion; // ivar: _suggestion


-(id)initWithSuggestion:(id)arg0 ;


@end


#endif