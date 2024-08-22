// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSNETSERVICE_H
#define NSNETSERVICE_H

@class NSArray, NSString;
@protocol NSNetServiceDelegate;

#import <Foundation/Foundation.h>


@interface NSNetService : NSObject {
    id *_netService;
    id *_delegate;
    id *_reserved;
}


@property (readonly, copy) NSArray *addresses;
@property NSObject<NSNetServiceDelegate> *delegate;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *hostName;
@property BOOL includesPeerToPeer;
@property (readonly, copy) NSString *name;
@property (readonly) NSInteger port;
@property (readonly, copy) NSString *type;


+(id)dataFromTXTRecordDictionary:(id)arg0 ;
+(id)dictionaryFromTXTRecordData:(id)arg0 ;
-(BOOL)getInputStream:(*id)arg0 outputStream:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setTXTRecordData:(id)arg0 ;
-(NSUInteger)hash;
-(id)TXTRecordData;
-(id)description;
-(id)init;
-(id)initWithCFNetService:(struct __CFNetService *)arg0 ;
-(id)initWithDomain:(id)arg0 type:(id)arg1 name:(id)arg2 ;
-(id)initWithDomain:(id)arg0 type:(id)arg1 name:(id)arg2 port:(int)arg3 ;
-(void)_setIncludesAWDL:(BOOL)arg0 ;
-(void)dealloc;
-(void)publish;
-(void)publishWithOptions:(NSUInteger)arg0 ;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)resolve;
-(void)resolveWithTimeout:(CGFloat)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)startMonitoring;
-(void)stop;
-(void)stopMonitoring;


@end


#endif