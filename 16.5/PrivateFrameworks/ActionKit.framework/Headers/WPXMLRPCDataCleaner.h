// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPXMLRPCDATACLEANER_H
#define WPXMLRPCDATACLEANER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface WPXMLRPCDataCleaner : NSObject {
    NSData *xmlData;
}




-(id)appendClosingTags:(id)arg0 toResponseString:(id)arg1 ;
-(id)cleanCharactersBeforePreamble:(id)arg0 ;
-(id)cleanClosingTagIfNeeded:(id)arg0 lengthOfCharactersPrecedingPreamble:(NSInteger)arg1 ;
-(id)cleanData;
-(id)cleanInvalidUTF8:(id)arg0 ;
-(id)cleanInvalidXMLCharacters:(id)arg0 ;
-(id)cleanWithTidyIfPresent:(id)arg0 ;
-(id)cloingTagsForString:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)repairTruncatedClosingTags:(id)arg0 inResponseString:(id)arg1 ;
-(struct _NSRange )rangeOfLastValidClosingTagInString:(id)arg0 ;


@end


#endif