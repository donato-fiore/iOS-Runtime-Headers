// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTROKEPROVIDERSLICEIDENTIFIERCOHERENCE_H
#define PKSTROKEPROVIDERSLICEIDENTIFIERCOHERENCE_H

@class PKStrokeProviderSliceIdentifier, NSString;



@interface PKStrokeProviderSliceIdentifierCoherence : PKStrokeProviderSliceIdentifier {
    ? inkTimestamp;
    ? transformTimestamp;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 tStart:(CGFloat)arg1 tEnd:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif