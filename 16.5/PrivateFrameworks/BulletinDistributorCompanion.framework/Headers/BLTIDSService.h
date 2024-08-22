// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTIDSSERVICE_H
#define BLTIDSSERVICE_H

@class IDSService, NSString;
@protocol BLTAbstractIDSService, BLTAbstractIDSDevice;

#import <Foundation/Foundation.h>


@interface BLTIDSService : NSObject <BLTAbstractIDSService>

 {
    IDSService *_service;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<BLTAbstractIDSDevice> *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)sendProtobuf:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendResourceAtURL:(id)arg0 metadata:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(id)initWithService:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingRequestsOfType:(unsigned short)arg1 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingResponsesOfType:(unsigned short)arg1 ;


@end


#endif