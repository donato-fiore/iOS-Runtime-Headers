// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEDATAPROVIDER_H
#define GEOPLACEDATAPROVIDER_H


#import <Foundation/Foundation.h>


@interface GEOPlaceDataProvider : NSObject

@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *finishedHandler; // ivar: _finishedHandler
@property (nonatomic) BOOL isLoading; // ivar: _isLoading


-(void)cancelProviderRequest;
-(void)cancelRequest;
-(void)dealloc;
-(void)providerDidCancel;
-(void)providerReceivedErrorCode:(NSInteger)arg0 userInfo:(id)arg1 ;
-(void)providerReceivedResponse:(id)arg0 userInfo:(id)arg1 ;
-(void)requestCompleted;
-(void)startProviderWithRequest:(id)arg0 appIdentifier:(id)arg1 ;
// -(void)startRequest:(id)arg0 appIdentifier:(id)arg1 finished:(id)arg2 error:(unk)arg3  ;


@end


#endif