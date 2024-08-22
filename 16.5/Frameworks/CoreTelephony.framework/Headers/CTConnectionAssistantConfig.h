// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCONNECTIONASSISTANTCONFIG_H
#define CTCONNECTIONASSISTANTCONFIG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCAModelVector.h"

@interface CTConnectionAssistantConfig : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) CTCAModelVector *modelVector; // ivar: _modelVector


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif