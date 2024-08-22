// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRCSSPOKENCOMMANDUTILITIES_H
#define SRCSSPOKENCOMMANDUTILITIES_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SRCSSpokenCommandUtilities : NSObject {
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}




+(id)sharedSpokenCommandUtilities;
+(struct __CFStringTokenizer *)wordUnitStringTokenizerRefForLocaleIdentifier:(id)arg0 ;
-(id)commandAttributes;
-(id)commandStringsTableForLocaleIdentifier:(id)arg0 ;
-(id)dictionaryForLocaleIdentifier:(id)arg0 bundle:(id)arg1 resourceFileName:(id)arg2 resourceFileExtension:(id)arg3 ;
-(id)dictionaryForLocaleIdentifier:(id)arg0 bundle:(id)arg1 subDirectory:(id)arg2 rootFileName:(id)arg3 rootFileExtension:(id)arg4 ;
-(id)dictionaryForLocaleIdentifier:(id)arg0 resourceFileName:(id)arg1 resourceFileExtension:(id)arg2 ;
-(id)init;
-(void)_flushBuiltInCommandsStringsTable;


@end


#endif