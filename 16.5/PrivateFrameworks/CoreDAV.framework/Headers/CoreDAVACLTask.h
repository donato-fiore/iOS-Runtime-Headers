// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVACLTASK_H
#define COREDAVACLTASK_H

@class NSArray;
@protocol CoreDAVACLTaskDelegate;


#import "CoreDAVTask.h"

@interface CoreDAVACLTask : CoreDAVTask

@property (retain, nonatomic) NSArray *accessControlEntities; // ivar: _accessControlEntities
@property (weak, nonatomic) NSObject<CoreDAVACLTaskDelegate> *delegate;


-(id)description;
-(id)httpMethod;
-(id)initWithAccessControlEntities:(id)arg0 atURL:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif