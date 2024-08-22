// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDAPPACTIONSBOX_H
#define DNDAPPACTIONSBOX_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDAppActionsBox : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *appActionsForModeIdentifier; // ivar: _appActionsForModeIdentifier


+(BOOL)supportsSecureCoding;
-(id)appConfigurationActionsForModeIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif