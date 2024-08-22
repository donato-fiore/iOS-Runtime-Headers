// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTATUSDOMAINPUBLISHER_H
#define STSTATUSDOMAINPUBLISHER_H

@class NSString;
@protocol STStatusDomainPublisherClientHandle, STStatusDomainPublisherServerHandle, STStatusDomainData;

#import <Foundation/Foundation.h>


@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle>

 {
    BOOL _invalidated;
    id<STStatusDomainPublisherServerHandle> *_serverHandle;
}


@property (copy, nonatomic) NSObject<STStatusDomainData> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<STStatusDomainData> *volatileData;


+(NSUInteger)statusDomainName;
+(id)emptyChangeContext;
+(id)emptyData;
-(id)init;
-(id)initWithServerHandle:(id)arg0 ;
-(void)dealloc;
-(void)handleUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)invalidate;
// -(void)updateData:(id)arg0 completion:(unk)arg1  ;
-(void)updateDataWithBlock:(id)arg0 ;
// -(void)updateDataWithBlock:(id)arg0 completion:(unk)arg1  ;
// -(void)updateVolatileData:(id)arg0 completion:(unk)arg1  ;
-(void)updateVolatileDataWithBlock:(id)arg0 ;
// -(void)updateVolatileDataWithBlock:(id)arg0 completion:(unk)arg1  ;


@end


#endif