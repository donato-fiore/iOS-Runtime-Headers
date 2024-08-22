// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VOSPROFILESECONDARYCOMMAND_H
#define _VOSPROFILESECONDARYCOMMAND_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VOSCommand.h"
#import "_VOSProfileCommand.h"

@interface _VOSProfileSecondaryCommand : NSObject <NSSecureCoding>



@property (retain, nonatomic) VOSCommand *command; // ivar: _command
@property (nonatomic) NSUInteger context; // ivar: _context
@property (nonatomic) NSUInteger pressCount; // ivar: _pressCount
@property (weak, nonatomic) _VOSProfileCommand *primaryProfileCommand; // ivar: _primaryProfileCommand


+(BOOL)supportsSecureCoding;
+(id)profileSecondaryCommandWithCommand:(id)arg0 context:(NSUInteger)arg1 pressCount:(NSUInteger)arg2 ;
+(id)profileSecondaryCommandWithStringValue:(id)arg0 context:(NSUInteger)arg1 pressCount:(NSUInteger)arg2 ;
-(id)_initWithCommand:(id)arg0 context:(NSUInteger)arg1 pressCount:(NSUInteger)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif