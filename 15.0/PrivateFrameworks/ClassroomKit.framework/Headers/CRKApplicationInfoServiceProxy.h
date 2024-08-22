// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKAPPLICATIONINFOSERVICEPROXY_H
#define CRKAPPLICATIONINFOSERVICEPROXY_H

@protocol CRKApplicationInfoServiceInterface;

#import <Foundation/Foundation.h>

#import "CRKValidXPCConnectionProvider.h"

@interface CRKApplicationInfoServiceProxy : NSObject <CRKApplicationInfoServiceInterface>



@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider


-(id)init;
-(void)_fetchApplicationWithDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)fetchApplicationWithDescriptor:(id)arg0 completion:(id)arg1 ;


@end


#endif