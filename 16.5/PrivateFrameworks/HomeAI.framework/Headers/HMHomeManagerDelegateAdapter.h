// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMHOMEMANAGERDELEGATEADAPTER_H
#define HMHOMEMANAGERDELEGATEADAPTER_H

@class NSString;
@protocol HMHomeManagerDelegate;

#import <Foundation/Foundation.h>


@interface HMHomeManagerDelegateAdapter : NSObject <HMHomeManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *didUpdateHomes; // ivar: _didUpdateHomes
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif