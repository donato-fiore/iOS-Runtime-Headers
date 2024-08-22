// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTROKEPROVIDERSLICEIDENTIFIERCONCRETE_H
#define PKSTROKEPROVIDERSLICEIDENTIFIERCONCRETE_H



#import "PKStrokeProviderSliceIdentifier.h"

@interface PKStrokeProviderSliceIdentifierConcrete : PKStrokeProviderSliceIdentifier

@property (readonly, nonatomic) _PKStrokeID version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 version:(struct _PKStrokeID )arg1 tStart:(CGFloat)arg2 tEnd:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif