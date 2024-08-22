// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTRUCTUREDDATASTREAM_H
#define HMDSTRUCTUREDDATASTREAM_H

@class NSError;

#import <Foundation/Foundation.h>


@interface HMDStructuredDataStream : NSObject

@property (readonly, copy) NSError *error;


-(void)failWithError:(id)arg0 ;
-(void)failWithReason:(id)arg0 ;


@end


#endif