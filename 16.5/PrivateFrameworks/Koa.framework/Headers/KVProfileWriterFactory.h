// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVPROFILEWRITERFACTORY_H
#define KVPROFILEWRITERFACTORY_H

@class NSString;
@protocol KVProfileWriterProvider;

#import <Foundation/Foundation.h>


@interface KVProfileWriterFactory : NSObject <KVProfileWriterProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)profileWriterForFormat:(unsigned char)arg0 outputStream:(id)arg1 error:(*id)arg2 ;


@end


#endif