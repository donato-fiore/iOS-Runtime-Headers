// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPROXYLIBRARYMANAGEROUTSTANDINGINVOCATION_H
#define CPLPROXYLIBRARYMANAGEROUTSTANDINGINVOCATION_H

@class NSData, NSError;

#import <Foundation/Foundation.h>

#import "CPLResource.h"

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject

@property (nonatomic) BOOL didFinish; // ivar: _didFinish
@property (nonatomic) BOOL didStart; // ivar: _didStart
@property (retain, nonatomic) NSData *finalData; // ivar: _finalData
@property (retain, nonatomic) NSError *finalError; // ivar: _finalError
@property (retain, nonatomic) CPLResource *finalResource; // ivar: _finalResource
@property (nonatomic, getter=isInMemoryRequest) BOOL inMemoryRequest; // ivar: _inMemoryRequest
@property (nonatomic) float progress; // ivar: _progress


-(id)description;


@end


#endif