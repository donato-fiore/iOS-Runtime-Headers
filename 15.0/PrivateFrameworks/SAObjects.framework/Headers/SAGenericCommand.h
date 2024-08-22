// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGENERICCOMMAND_H
#define SAGENERICCOMMAND_H

@class NSString;


#import "SABaseCommand.h"

@interface SAGenericCommand : SABaseCommand

@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) NSString *group;


-(id)encodedClassName;


@end


#endif