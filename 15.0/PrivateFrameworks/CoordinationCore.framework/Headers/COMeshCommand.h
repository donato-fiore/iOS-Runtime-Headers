// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHCOMMAND_H
#define COMESHCOMMAND_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "COMeshNode.h"

@interface COMeshCommand : NSObject <NSSecureCoding>



@property (readonly, nonatomic) COMeshNode *sender;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif