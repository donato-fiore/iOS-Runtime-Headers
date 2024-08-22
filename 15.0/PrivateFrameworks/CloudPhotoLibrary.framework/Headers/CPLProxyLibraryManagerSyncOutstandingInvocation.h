// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPROXYLIBRARYMANAGERSYNCOUTSTANDINGINVOCATION_H
#define CPLPROXYLIBRARYMANAGERSYNCOUTSTANDINGINVOCATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject

@property (nonatomic) BOOL didFinish; // ivar: _didFinish
@property (retain, nonatomic) NSDictionary *errors; // ivar: _errors


-(id)description;


@end


#endif