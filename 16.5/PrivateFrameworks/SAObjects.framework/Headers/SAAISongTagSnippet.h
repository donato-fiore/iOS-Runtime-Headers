// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAISONGTAGSNIPPET_H
#define SAAISONGTAGSNIPPET_H



#import "SAUISnippet.h"
#import "SAUIAppPunchOut.h"
#import "SAMPPlaybackButton.h"
#import "SAAISongTag.h"

@interface SAAISongTagSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *attributionPunchOut;
@property (retain, nonatomic) SAMPPlaybackButton *playbackButton;
@property (retain, nonatomic) SAUIAppPunchOut *purchaseSongPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *songDetailsPunchOut;
@property (retain, nonatomic) SAAISongTag *songTag;


+(id)songTagSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif