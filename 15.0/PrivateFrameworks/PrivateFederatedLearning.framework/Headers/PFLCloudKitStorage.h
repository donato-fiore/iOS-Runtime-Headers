// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLCLOUDKITSTORAGE_H
#define PFLCLOUDKITSTORAGE_H

@class CKContainer, NSString;
@protocol PFLNetworkProvider;

#import <Foundation/Foundation.h>


@interface PFLCloudKitStorage : NSObject <PFLNetworkProvider>



@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)fetchModelForTask:(id)arg0 completion:(id)arg1 ;
-(void)fetchTasks:(id)arg0 ;
-(void)uploadDeviceResult:(id)arg0 completion:(id)arg1 ;


@end


#endif