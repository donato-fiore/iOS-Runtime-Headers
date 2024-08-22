// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLJSONOBJECT_H
#define TMLJSONOBJECT_H

@class NSMutableDictionary, NSMutableSet, NSData, NSString, NSDictionary;
@protocol NSCopying, TMLObservable;

#import <Foundation/Foundation.h>

#import "TMLJSONSchema.h"

@interface TMLJSONObject : NSObject <NSCopying, TMLObservable>

 {
    NSMutableDictionary *_derived;
    NSMutableSet *_observers;
}


@property (copy, nonatomic) NSData *DATA; // ivar: _DATA
@property (readonly, nonatomic) TMLJSONSchema *SCHEMA; // ivar: _SCHEMA
@property (copy, nonatomic) NSString *STRING; // ivar: _STRING
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *rawJSON; // ivar: _rawJSON
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)tmlPropertyWithKeyPath:(id)arg0 ;
-(BOOL)internalSetJSON:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSchema:(id)arg0 ;
-(id)initWithSchema:(id)arg0 json:(id)arg1 ;
-(id)rawValueForKeyPath:(id)arg0 dictionary:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)internalValidateJSON:(id)arg0 completion:(id)arg1 ;
-(void)notifyAllObservers;
-(void)tmlAddObserver:(id)arg0 forKeyPath:(id)arg1 callback:(id)arg2 ;
-(void)tmlRemoveObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)validateJSON:(id)arg0 completion:(id)arg1 ;


@end


#endif