// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVPRINCIPALSEARCHPROPERTYSETTASK_H
#define COREDAVPRINCIPALSEARCHPROPERTYSETTASK_H

@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;


#import "CoreDAVTask.h"

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask

@property (weak, nonatomic) NSObject<CoreDAVPrincipalSearchPropertySetTaskDelegate> *delegate;


-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)httpMethod;
-(id)initWithURL:(id)arg0 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif