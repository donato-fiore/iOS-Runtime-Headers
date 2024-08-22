// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIANALYSISSTATEUPDATE_H
#define HMIANALYSISSTATEUPDATE_H

@class HMFObject, NSSet;
@protocol NSSecureCoding;



@interface HMIAnalysisStateUpdate : HMFObject <NSSecureCoding>



@property (readonly) NSSet *torsoAnnotations; // ivar: _torsoAnnotations


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTorsoAnnotations:(id)arg0 ;
-(id)initWithTorsoAnnotationsArray:(id)arg0 ;
-(id)stateUpdateByMergingStateUpdate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif