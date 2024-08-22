// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESHCOMMAND_H
#define COMESHCOMMAND_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "COMeshNode.h"

@interface COMeshCommand : NSObject <NSSecureCoding>



@property (readonly, nonatomic) COMeshNode *sender;


+(BOOL)supportsSecureCoding;
-(NSUInteger)rapportTransactionID;
-(id)_sendingConstituent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)rapportOptions;
-(void)_setRapportOptions:(id)arg0 ;
-(void)_setSendingConstituent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif