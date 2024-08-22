// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKEVENTDESCRIPTIONGENERATOR_H
#define CUIKEVENTDESCRIPTIONGENERATOR_H



#import "CUIKDescriptionGenerator.h"

@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator



+(id)sharedGenerator;
-(BOOL)_virtualConferenceUsesShortRepresentation:(id)arg0 ;
-(id)_attributedStringWithURL:(id)arg0 title:(id)arg1 ;
-(id)_basicTextAttributes;
-(id)_boldBasicTextAttributes;
-(id)_htmlStringWithURL:(id)arg0 title:(id)arg1 ;
-(id)_showEventURLStringForEvent:(id)arg0 ;
-(id)_textRepresentationForAttendee:(id)arg0 includeEmailAddress:(BOOL)arg1 ;
-(id)_urlAttributes:(id)arg0 ;
-(id)_virtualConferenceHTMLRepresentation:(id)arg0 isForEmail:(BOOL)arg1 ;
-(id)dateStringRepresentationForEvent:(id)arg0 ;
-(id)textRepresentationForEvent:(id)arg0 withTextFormat:(int)arg1 showURI:(BOOL)arg2 ;
-(id)virtualConferenceEmailHTMLRepresentation:(id)arg0 ;


@end


#endif