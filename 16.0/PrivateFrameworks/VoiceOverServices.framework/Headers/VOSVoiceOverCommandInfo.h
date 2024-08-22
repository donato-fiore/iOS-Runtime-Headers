// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOSVOICEOVERCOMMANDINFO_H
#define VOSVOICEOVERCOMMANDINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VOSVoiceOverCommandInfo : NSObject {
    NSDictionary *_brailleCommands;
}




-(id)brailleCommandsForCategory:(id)arg0 ;
-(id)brailleVoiceOverCategories;
-(id)localizedNameForCategory:(id)arg0 ;
-(id)localizedNameForCommand:(id)arg0 ;
-(void)_loadBrailleCommandsIfNecessary;


@end


#endif