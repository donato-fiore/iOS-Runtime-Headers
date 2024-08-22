// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENEDATASTORE_H
#define SBSCENEDATASTORE_H

@class NSMutableDictionary, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SBSceneDataStore : NSObject {
    NSMutableDictionary *_archivedObjectCache;
    id *_handler;
}


@property (readonly, nonatomic, getter=_data) NSDictionary *data; // ivar: _data
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=_isInvalidated) BOOL invalidated; // ivar: _invalidated


-(id)_initWithIdentifier:(id)arg0 data:(id)arg1 changeHandler:(id)arg2 ;
-(id)objectForKey:(id)arg0 ;
-(id)safeObjectForKey:(id)arg0 ofType:(Class)arg1 ;
-(id)unarchivedObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(void)_invalidate;
-(void)_invokeChangeHandler;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setArchivedObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif