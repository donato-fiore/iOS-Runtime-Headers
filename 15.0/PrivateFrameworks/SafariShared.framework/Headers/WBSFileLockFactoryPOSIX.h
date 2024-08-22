// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSFILELOCKFACTORYPOSIX_H
#define WBSFILELOCKFACTORYPOSIX_H

@class NSString;
@protocol WBSFileLockFactory;

#import <Foundation/Foundation.h>


@interface WBSFileLockFactoryPOSIX : NSObject <WBSFileLockFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)coordinationLockURL:(id)arg0 ;
-(id)lockURL:(id)arg0 error:(*id)arg1 ;


@end


#endif