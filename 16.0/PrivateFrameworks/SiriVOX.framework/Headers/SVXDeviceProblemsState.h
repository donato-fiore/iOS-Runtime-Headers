// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXDEVICEPROBLEMSSTATE_H
#define SVXDEVICEPROBLEMSSTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXDeviceProblemsState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isFixingProblems; // ivar: _isFixingProblems
@property (readonly, nonatomic) NSUInteger problems; // ivar: _problems


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsFixingProblems:(BOOL)arg0 problems:(NSUInteger)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif