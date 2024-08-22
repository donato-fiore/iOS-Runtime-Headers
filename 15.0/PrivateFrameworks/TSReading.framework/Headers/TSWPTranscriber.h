// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTRANSCRIBER_H
#define TSWPTRANSCRIBER_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>


@interface TSWPTranscriber : NSObject {
    NSString *_displayName;
    NSString *_identifier;
    NSString *_transformIdentifier;
}


@property (readonly) NSLocale *romanizationLocale; // ivar: _romanizationLocale


+(id)transcriberWithIdentifier:(id)arg0 displayName:(id)arg1 romanizationLocaleID:(id)arg2 transformIdentifier:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 romanizationLocaleID:(id)arg2 transformIdentifier:(id)arg3 ;
-(id)transcribeText:(id)arg0 ;
-(id)transcribeText:(id)arg0 withLocale:(id)arg1 ;
-(void)dealloc;


@end


#endif