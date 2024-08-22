// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHAZAMKITSERVICECONNECTIONCLIENT_H
#define SHSHAZAMKITSERVICECONNECTIONCLIENT_H

@class NSString;
@protocol SHShazamKitClient;

#import <Foundation/Foundation.h>


@interface SHShazamKitServiceConnectionClient : NSObject <SHShazamKitClient>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHShazamKitClient> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_library:(id)arg0 didChangeWithSnapshot:(id)arg1 ;
-(void)_library:(id)arg0 didProduceError:(id)arg1 failedItemIdentifiers:(id)arg2 ;
-(void)_libraryDidCompleteSync:(id)arg0 ;
-(void)_libraryWillBeginSync:(id)arg0 ;
-(void)matcher:(id)arg0 didProduceResponse:(id)arg1 ;


@end


#endif