// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEEXTERNALSTREAMGROUPDEBUGINFO_H
#define PHASEEXTERNALSTREAMGROUPDEBUGINFO_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHASEExternalStreamGroupDebugInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isControlled) BOOL controlled; // ivar: _controlled
@property (readonly, nonatomic, getter=isControllerPaused) BOOL controllerPaused; // ivar: _controllerPaused
@property (readonly, copy, nonatomic) NSDictionary *streams; // ivar: _streams


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif