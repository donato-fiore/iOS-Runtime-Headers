// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CFPREFSOVERSIZEDPLISTDESCRIPTION_H
#define _CFPREFSOVERSIZEDPLISTDESCRIPTION_H


#import <Foundation/Foundation.h>


@interface _CFPrefsOversizedPlistDescription : NSObject {
    *__CFDictionary existingValues;
    *__CFDictionary newValues;
}




-(id)_descriptionOfDictionary:(struct __CFDictionary *)arg0 withKeyRedaction:(BOOL)arg1 ;
-(id)_descriptionWithKeyRedaction:(BOOL)arg0 ;
-(id)description;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif