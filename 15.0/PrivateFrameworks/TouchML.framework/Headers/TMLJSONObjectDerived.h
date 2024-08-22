// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLJSONOBJECTDERIVED_H
#define TMLJSONOBJECTDERIVED_H

@class NSString;


#import "TMLJSONObject.h"

@interface TMLJSONObjectDerived : TMLJSONObject {
    TMLJSONObject *_parent;
    NSString *_keyPath;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)initWithParent:(id)arg0 keyPath:(id)arg1 ;
-(id)rawJSON;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)setRawJSON:(id)arg0 ;
-(void)tmlAddObserver:(id)arg0 forKeyPath:(id)arg1 callback:(id)arg2 ;
-(void)tmlRemoveObserver:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif