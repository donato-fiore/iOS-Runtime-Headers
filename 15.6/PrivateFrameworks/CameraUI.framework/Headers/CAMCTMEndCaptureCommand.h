// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMCTMENDCAPTURECOMMAND_H
#define CAMCTMENDCAPTURECOMMAND_H

@class NSString;


#import "CAMCaptureCommand.h"

@interface CAMCTMEndCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSString *_persistenceUUID; // ivar: __persistenceUUID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistenceUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif