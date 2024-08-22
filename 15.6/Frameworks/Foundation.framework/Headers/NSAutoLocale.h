// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSAUTOLOCALE_H
#define NSAUTOLOCALE_H

@class NSLocale;



@interface NSAutoLocale : NSLocale {
    NSLocale *loc;
    _opaque_pthread_mutex_t _lock;
}




+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)_init;
-(id)_prefs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayNameForKey:(id)arg0 value:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(unsigned char)_doesNotRequireSpecialCaseHandling;
-(void)_setDoesNotRequireSpecialCaseHandling;
-(void)_update:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif