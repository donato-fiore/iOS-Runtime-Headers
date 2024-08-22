// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DASEXTENSIONREMOTECONTEXT_H
#define _DASEXTENSIONREMOTECONTEXT_H

@class NSExtensionContext, NSString;
@protocol _DASRemoteExtensionContextProtocol, OS_os_log;


#import "_DASExtension.h"

@interface _DASExtensionRemoteContext : NSExtensionContext <_DASRemoteExtensionContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) _DASExtension *extension;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


-(id)createExtensionRunnerWithClassName:(id)arg0 ;
-(id)hostContextWithError:(*id)arg0 ;
-(id)init;
-(void)performActivity:(id)arg0 ;
-(void)suspend;


@end


#endif