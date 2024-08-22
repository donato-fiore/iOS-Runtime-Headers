// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSERROR_H
#define CMSERROR_H


#import <Foundation/Foundation.h>


@interface CMSError : NSObject



+(id)_descriptionForErrorCode:(NSInteger)arg0 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 description:(id)arg2 ;


@end


#endif