// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSSANDBOXEXTENSIONHELPER_H
#define DRSSANDBOXEXTENSIONHELPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DRSSandboxExtensionHelper : NSObject

@property (readonly, nonatomic) BOOL didInit; // ivar: _didInit
@property (readonly, nonatomic) NSString *logPath; // ivar: _logPath
@property (nonatomic) NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle


-(id)initWithSandboxExtensionToken:(id)arg0 logPath:(id)arg1 errorOut:(*id)arg2 ;
-(void)dealloc;


@end


#endif