// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMBIOMESTREAMDIRECTORY_H
#define EMBIOMESTREAMDIRECTORY_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EMBiomeStreamDirectory : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)url;


@end


#endif