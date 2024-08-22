// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKBOOKSSERVICEPROXY_H
#define CRKBOOKSSERVICEPROXY_H

@class NSString;
@protocol CRKBooksServiceInterface;

#import <Foundation/Foundation.h>

#import "CRKValidXPCConnectionProvider.h"

@interface CRKBooksServiceProxy : NSObject <CRKBooksServiceInterface>



@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_fetchBooksWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_fetchChaptersWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchBooksWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchChaptersWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif