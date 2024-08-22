// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTUPLOADCLIENTFACTORY_H
#define ASTUPLOADCLIENTFACTORY_H


#import <Foundation/Foundation.h>


@interface ASTUploadClientFactory : NSObject



+(id)repairToolUploadClientWithASTSession:(id)arg0 withUploadRequests:(id)arg1 andDelegate:(id)arg2 ;
+(id)repairToolUploadClientWithUploadRequests:(id)arg0 andDelegate:(id)arg1 ;
+(id)uploadClientWithASTSession:(id)arg0 andFileMap:(id)arg1 andUrlFactory:(id)arg2 andDelegate:(id)arg3 ;


@end


#endif