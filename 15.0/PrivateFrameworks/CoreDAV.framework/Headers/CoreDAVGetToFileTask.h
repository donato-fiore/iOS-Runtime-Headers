// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVGETTOFILETASK_H
#define COREDAVGETTOFILETASK_H

@class NSFileHandle;


#import "CoreDAVGetTask.h"

@interface CoreDAVGetToFileTask : CoreDAVGetTask

@property (retain, nonatomic) NSFileHandle *destinationFile; // ivar: _destinationFile


-(BOOL)shouldLogResponseBody;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)initWithURL:(id)arg0 destinationFile:(id)arg1 ;


@end


#endif