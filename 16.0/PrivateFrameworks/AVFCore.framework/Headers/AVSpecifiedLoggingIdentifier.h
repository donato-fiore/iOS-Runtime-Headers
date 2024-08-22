// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSPECIFIEDLOGGINGIDENTIFIER_H
#define AVSPECIFIEDLOGGINGIDENTIFIER_H

@class NSString;
@protocol AVLoggingIdentifier;

#import <Foundation/Foundation.h>

#import "AVSpecifiedLoggingIdentifierInternal.h"

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier>

 {
    AVSpecifiedLoggingIdentifierInternal *_specifiedLoggingIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)initWithSpecifiedName:(id)arg0 ;
-(id)makeDerivedIdentifier;
-(void)dealloc;


@end


#endif