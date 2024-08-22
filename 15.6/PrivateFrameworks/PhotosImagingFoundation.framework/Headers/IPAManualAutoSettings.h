// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAMANUALAUTOSETTINGS_H
#define IPAMANUALAUTOSETTINGS_H

@class NSMutableDictionary;


#import "IPAAutoSettings.h"

@interface IPAManualAutoSettings : IPAAutoSettings {
    NSMutableDictionary *_state;
}




-(BOOL)_applyArchiveDictionary:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_archiveIntoDictionary:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif