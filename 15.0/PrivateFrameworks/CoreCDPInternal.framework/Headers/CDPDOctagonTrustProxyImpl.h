// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDOCTAGONTRUSTPROXYIMPL_H
#define CDPDOCTAGONTRUSTPROXYIMPL_H

@class CDPContext, NSString;
@protocol CDPDOctagonTrustProxy;

#import <Foundation/Foundation.h>


@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy>



@property (retain, nonatomic) CDPContext *cdpContext; // ivar: _cdpContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fetchAllEscrowRecords:(id)arg0 forceFetch:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchEscrowRecords:(id)arg0 forceFetch:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithContext:(id)arg0 ;


@end


#endif