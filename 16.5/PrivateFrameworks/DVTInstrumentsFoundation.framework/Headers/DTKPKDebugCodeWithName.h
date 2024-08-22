// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKPKDEBUGCODEWITHNAME_H
#define DTKPKDEBUGCODEWITHNAME_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DTKPKDebugCodeWithName : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unk kdebugCode; // ivar: _kdebugCode
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(unsigned int)arg0 name:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif