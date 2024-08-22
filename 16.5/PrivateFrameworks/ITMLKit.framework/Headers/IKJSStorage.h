// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSSTORAGE_H
#define IKJSSTORAGE_H

@class NSMutableDictionary;
@protocol IKJSStorage, IKAppDataStoring, OS_dispatch_queue;


#import "IKJSObject.h"

@interface IKJSStorage : IKJSObject <IKJSStorage>

 {
    ? _flags;
}


@property (readonly, weak, nonatomic) NSObject<IKAppDataStoring> *appStorage; // ivar: _appStorage
@property (readonly, nonatomic) NSUInteger length;
@property (retain, nonatomic) NSMutableDictionary *storageDict; // ivar: _storageDict
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // ivar: _storageQueue


-(id)getItem:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 appStorage:(id)arg1 ;
-(id)key:(NSUInteger)arg0 ;
-(id)keysAndValues;
-(void)_verifyExternalDataStoreForKey:(id)arg0 ;
-(void)clear;
-(void)removeItem:(id)arg0 ;
-(void)setItem:(id)arg0 ;


@end


#endif