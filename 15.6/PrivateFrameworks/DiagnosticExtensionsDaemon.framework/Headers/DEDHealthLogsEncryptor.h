// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDHEALTHLOGSENCRYPTOR_H
#define DEDHEALTHLOGSENCRYPTOR_H

@class NSString;
@protocol DEDEncryptor;

#import <Foundation/Foundation.h>


@interface DEDHealthLogsEncryptor : NSObject <DEDEncryptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)encryptLogsAtPath:(id)arg0 outputDirectory:(id)arg1 ;


@end


#endif