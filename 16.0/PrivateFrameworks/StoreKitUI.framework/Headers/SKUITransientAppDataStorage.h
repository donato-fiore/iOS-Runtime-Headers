// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITRANSIENTAPPDATASTORAGE_H
#define SKUITRANSIENTAPPDATASTORAGE_H

@class NSString, NSMutableDictionary;
@protocol IKAppDataStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *storage; // ivar: _storage
@property (readonly) Class superclass;


-(NSUInteger)count;
-(NSUInteger)setData:(id)arg0 forKey:(id)arg1 ;
-(id)getDataForKey:(id)arg0 ;
-(id)init;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(void)clear;
-(void)removeDataForKey:(id)arg0 ;


@end


#endif