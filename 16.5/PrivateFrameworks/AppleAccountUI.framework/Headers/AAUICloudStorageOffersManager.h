// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUICLOUDSTORAGEOFFERSMANAGER_H
#define AAUICLOUDSTORAGEOFFERSMANAGER_H

@class PSCloudStorageOffersManager, NSString;
@protocol PSCloudStorageOffersManagerDelegate;

#import <Foundation/Foundation.h>


@interface AAUICloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate>



@property (retain, nonatomic) PSCloudStorageOffersManager *cloudStorageOffersManager; // ivar: _cloudStorageOffersManager
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)manager:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)manager:(id)arg0 loadDidFailWithError:(id)arg1 ;
-(void)managerDidCancel:(id)arg0 ;
-(void)presentCloudStorageOffersPageFromNavigationController:(id)arg0 requiredStorageThreshold:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif