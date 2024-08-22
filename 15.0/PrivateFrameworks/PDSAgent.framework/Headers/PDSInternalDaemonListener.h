// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSINTERNALDAEMONLISTENER_H
#define PDSINTERNALDAEMONLISTENER_H

@protocol PDSRemoteInternal, PDSKVStore;

#import <Foundation/Foundation.h>


@interface PDSInternalDaemonListener : NSObject <PDSRemoteInternal>



@property (retain, nonatomic) NSObject<PDSKVStore> *kvStore; // ivar: _kvStore


-(id)initWithKVStore:(id)arg0 ;
-(void)kvStateDumpWithCompletion:(id)arg0 ;
-(void)setDataValue:(id)arg0 forKey:(id)arg1 withCompletion:(id)arg2 ;
-(void)setNumberValue:(id)arg0 forKey:(id)arg1 withCompletion:(id)arg2 ;
-(void)setStringValue:(id)arg0 forKey:(id)arg1 withCompletion:(id)arg2 ;
-(void)stringRepresentationForKey:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif