// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMKEYVALUECOLLECTION_H
#define IMKEYVALUECOLLECTION_H

@class NSString, NSMutableDictionary;
@protocol IMKeyValueCollectionStorage, NSCopying, IMKeyValueCollectionDelegate;

#import <Foundation/Foundation.h>


@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying>

 {
    NSInteger _batchCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMKeyValueCollectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<IMKeyValueCollectionStorage> *keyValueStorage; // ivar: _keyValueStorage
@property (readonly) NSMutableDictionary *recordedChanges; // ivar: _recordedChanges
@property (readonly) Class superclass;


-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 withDefault:(BOOL)arg1 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 withDefault:(CGFloat)arg1 ;
-(NSInteger)int64ForKey:(id)arg0 ;
-(NSInteger)int64ForKey:(id)arg0 withDefault:(NSInteger)arg1 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 withDefault:(NSInteger)arg1 ;
-(NSUInteger)uint64ForKey:(id)arg0 ;
-(NSUInteger)uint64ForKey:(id)arg0 withDefault:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)errorArrayForKey:(id)arg0 ;
-(id)errorForKey:(id)arg0 ;
-(id)init;
-(id)initWithKeyValueStorage:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 withDefault:(id)arg1 ;
-(id)stringForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 withDefault:(id)arg1 ;
-(void)_broadcastIfNeeded;
-(void)_commitBatchWrite;
-(void)_notifyListeners;
-(void)_recordChange:(id)arg0 forKey:(id)arg1 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)_startBatchWrite;
-(void)addErrorToArray:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setError:(id)arg0 forKey:(id)arg1 ;
-(void)setInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setUint64:(NSInteger)arg0 forKey:(id)arg1 ;


@end


#endif