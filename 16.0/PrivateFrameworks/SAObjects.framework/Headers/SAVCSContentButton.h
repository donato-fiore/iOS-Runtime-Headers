// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAVCSCONTENTBUTTON_H
#define SAVCSCONTENTBUTTON_H

@class NSString, NSArray, NSURL;


#import "SAUIButton.h"
#import "SASTTemplateContentRating.h"

@interface SAVCSContentButton : SAUIButton

@property (copy, nonatomic) NSString *canonicalId;
@property (retain, nonatomic) SASTTemplateContentRating *contentRating;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSArray *togglePlayPauseCommands;
@property (copy, nonatomic) NSURL *url;


+(id)contentButton;
+(id)contentButtonWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif