// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEPROVIDERSERVICE_H
#define NSFILEPROVIDERSERVICE_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileProviderService : NSObject {
    id *_endpointCreatingProxy;
    NSObject<OS_dispatch_group> *_requestFinishedGroup;
}


@property (readonly, copy) NSString *name; // ivar: _name


-(id)fetchFileProviderConnectionAndReturnError:(*id)arg0 ;
-(id)initWithName:(id)arg0 endpointCreatingProxy:(id)arg1 requestFinishedGroup:(id)arg2 ;
-(void)dealloc;
-(void)getFileProviderConnectionWithCompletionHandler:(id)arg0 ;


@end


#endif