// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTAGOPERATORITEMIDENTIFIER_H
#define ICTAGOPERATORITEMIDENTIFIER_H

@class NSString;
@protocol ICItemIdentifier;

#import <Foundation/Foundation.h>


@interface ICTagOperatorItemIdentifier : NSObject <ICItemIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *parentIdentifier;
@property (readonly) Class superclass;


+(id)sharedItemIdentifier;


@end


#endif