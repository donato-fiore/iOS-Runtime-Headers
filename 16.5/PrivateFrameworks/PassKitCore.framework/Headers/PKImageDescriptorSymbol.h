// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIMAGEDESCRIPTORSYMBOL_H
#define PKIMAGEDESCRIPTORSYMBOL_H

@class NSString;


#import "PKImageDescriptor.h"

@interface PKImageDescriptorSymbol : PKImageDescriptor

@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)createForName:(id)arg0 withTintColor:(NSInteger)arg1 ;
+(id)createForName:(id)arg0 withTintColor:(NSInteger)arg1 hasBackground:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif