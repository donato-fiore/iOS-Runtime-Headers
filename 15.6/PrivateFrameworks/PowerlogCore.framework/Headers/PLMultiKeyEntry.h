// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMULTIKEYENTRY_H
#define PLMULTIKEYENTRY_H

@class NSMutableDictionary;


#import "PLEntry.h"

@interface PLMultiKeyEntry : PLEntry

@property (retain) NSMutableDictionary *multiKeys; // ivar: _multiKeys


+(void)load;
-(id)init;
-(id)keysForSubKey:(id)arg0 ofSubKeyType:(id)arg1 ;
-(id)objectsForSubKey:(id)arg0 ofSubKeyType:(id)arg1 ;
-(id)serializedForJSON;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif