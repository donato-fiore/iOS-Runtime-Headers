// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFLOCALE_H
#define __NSCFLOCALE_H



#import "NSLocale.h"

@interface __NSCFLocale : NSLocale



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)_prefs;
-(id)displayNameForKey:(id)arg0 value:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(unsigned char)_doesNotRequireSpecialCaseHandling;
-(void)_setDoesNotRequireSpecialCaseHandling;
-(void)release;


@end


#endif