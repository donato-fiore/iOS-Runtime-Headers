// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ELSHEALTHLOGSENCRYPTOR_H
#define ELSHEALTHLOGSENCRYPTOR_H

@class NSString;
@protocol ELSEncryptor;

#import <Foundation/Foundation.h>


@interface ELSHealthLogsEncryptor : NSObject <ELSEncryptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)encryptLogsAtPath:(id)arg0 outputDirectory:(id)arg1 ;


@end


#endif