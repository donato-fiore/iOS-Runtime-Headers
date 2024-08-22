// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMACTIONARGUMENTBASE_H
#define MCMACTIONARGUMENTBASE_H

@class NSString, NSURL;
@protocol MCMActionArgument;

#import <Foundation/Foundation.h>


@interface MCMActionArgumentBase : NSObject <MCMActionArgument>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;


-(id)initWithString:(id)arg0 ;


@end


#endif