// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVPROFILEREADERFACTORY_H
#define KVPROFILEREADERFACTORY_H

@class NSString;
@protocol KVProfileReaderProvider;

#import <Foundation/Foundation.h>


@interface KVProfileReaderFactory : NSObject <KVProfileReaderProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)profileReaderForData:(id)arg0 error:(*id)arg1 ;


@end


#endif