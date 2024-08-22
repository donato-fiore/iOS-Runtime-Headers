// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTROKEPROVIDERSLICEIDENTIFIER_H
#define PKSTROKEPROVIDERSLICEIDENTIFIER_H

@class NSString, NSUUID;
@protocol CHStrokeIdentifier;

#import <Foundation/Foundation.h>


@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *strokeUUID; // ivar: _strokeUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tEnd; // ivar: _tEnd
@property (readonly, nonatomic) CGFloat tStart; // ivar: _tStart


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 tStart:(CGFloat)arg1 tEnd:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif