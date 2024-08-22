// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTBUTTONROW_H
#define PTBUTTONROW_H

@class NSString;


#import "PTSRow.h"

@interface PTButtonRow : PTSRow

@property (copy, nonatomic) NSString *outletKeyPath; // ivar: _outletKeyPath


+(BOOL)supportsSecureCoding;
+(id)restoreDefaultSettingsButton;
+(id)rowWithTitle:(id)arg0 action:(id)arg1 ;
+(id)rowWithTitle:(id)arg0 outletKeyPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_defaultAction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)outletKeyPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif