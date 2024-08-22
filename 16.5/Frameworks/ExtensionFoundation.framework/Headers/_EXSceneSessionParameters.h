// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXSCENESESSIONPARAMETERS_H
#define _EXSCENESESSIONPARAMETERS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_EXPromise.h"

@interface _EXSceneSessionParameters : NSObject <NSSecureCoding>



@property (retain) _EXPromise *initializationParametersPromise; // ivar: _initializationParametersPromise
@property (retain) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property NSInteger sizeBridgingOptions; // ivar: _sizeBridgingOptions


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif