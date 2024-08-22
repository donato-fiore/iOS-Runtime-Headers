// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBLAUNCHDINTERFACE_H
#define RBLAUNCHDINTERFACE_H

@class NSString;
@protocol RBLaunchdInterfacing;

#import <Foundation/Foundation.h>


@interface RBLaunchdInterface : NSObject <RBLaunchdInterfacing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
-(id)copyJobWithLabel:(id)arg0 domain:(id)arg1 ;
-(id)copyJobWithPid:(int)arg0 ;
-(id)copyJobsManagedBy:(id)arg0 error:(*id)arg1 ;
-(id)currentDomain;
-(id)domainForPid:(int)arg0 ;
-(id)domainForUser:(unsigned int)arg0 ;
-(id)forJob:(id)arg0 createInstance:(unsigned char)arg1 error:(*id)arg2 ;
-(id)jobWithPlist:(id)arg0 ;
-(id)jobWithPlist:(id)arg0 domain:(id)arg1 ;
-(id)propertiesForJob:(id)arg0 error:(*id)arg1 ;
-(id)propertiesForPid:(int)arg0 error:(*id)arg1 ;
-(id)submitExtension:(id)arg0 overlay:(id)arg1 domain:(id)arg2 error:(*id)arg3 ;


@end


#endif