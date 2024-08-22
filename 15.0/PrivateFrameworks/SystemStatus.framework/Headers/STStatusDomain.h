// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTATUSDOMAIN_H
#define STSTATUSDOMAIN_H

@class NSString;
@protocol STStatusDomainClientHandle, STStatusDomainData, STStatusDomainServerHandle;

#import <Foundation/Foundation.h>


@interface STStatusDomain : NSObject <STStatusDomainClientHandle>



@property (readonly, copy, nonatomic) NSObject<STStatusDomainData> *data;
@property (copy, nonatomic) id *dataChangedBlock; // ivar: _dataChangedBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<STStatusDomainServerHandle> *serverHandle; // ivar: _serverHandle
@property (readonly) Class superclass;


+(NSUInteger)statusDomainName;
-(id)init;
-(id)initWithServerHandle:(id)arg0 ;
-(void)dealloc;
-(void)observeData:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)observeDataWithBlock:(id)arg0 ;


@end


#endif