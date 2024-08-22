// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSFSTREAMREGISTRY_H
#define FSFSTREAMREGISTRY_H


#import <Foundation/Foundation.h>


@interface FSFStreamRegistry : NSObject



+(BOOL)writeDict:(id)arg0 ;
+(id)readFileInToDict;
+(id)registryFilePath;
-(BOOL)registerForStream:(id)arg0 withSchema:(id)arg1 error:(*id)arg2 ;
-(id)getRegisteredStreams;


@end


#endif