// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFWEBVIEWDICTIONARY_H
#define MFWEBVIEWDICTIONARY_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol MFMailWebProcessProxy;



@interface MFWebViewDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
    id<MFMailWebProcessProxy> *_webProcessProxy;
    NSMutableSet *_changedKeys;
    BOOL _requiresResynchronization;
}


@property (readonly, nonatomic) NSString *javascriptName; // ivar: _javascriptName


-(BOOL)isEqualToDictionary:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)allKeys;
-(id)allKeysForObject:(id)arg0 ;
-(id)allValues;
-(id)descriptionWithLocale:(id)arg0 indent:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)keyEnumerator;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)_setRequiresSynchronization;
-(void)_updateRemoteInstance;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)registerWithWebView:(id)arg0 javascriptName:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setDictionary:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg0 ;
-(void)synchronize;


@end


#endif