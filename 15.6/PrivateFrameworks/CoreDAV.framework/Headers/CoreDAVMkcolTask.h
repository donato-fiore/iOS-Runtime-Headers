// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVMKCOLTASK_H
#define COREDAVMKCOLTASK_H

@class NSURL, NSSet;
@protocol CoreDAVTaskDelegate;


#import "CoreDAVActionBackedTask.h"

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}


@property (nonatomic) int absoluteOrder; // ivar: _absoluteOrder
@property (weak, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL; // ivar: _priorOrderedURL
@property (retain, nonatomic) NSSet *propertiesToSet; // ivar: _propertiesToSet


-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)description;
-(id)httpMethod;
-(id)initWithPropertiesToSet:(id)arg0 atURL:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif