// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKINTERNETDATESERVICEPROXY_H
#define CRKINTERNETDATESERVICEPROXY_H

@class NSString;
@protocol CRKInternetDateFetching;

#import <Foundation/Foundation.h>

#import "CRKValidXPCConnectionProvider.h"

@interface CRKInternetDateServiceProxy : NSObject <CRKInternetDateFetching>



@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_fetchInternetDateWithCompletion:(id)arg0 ;
-(void)fetchInternetDateWithCompletion:(id)arg0 ;


@end


#endif