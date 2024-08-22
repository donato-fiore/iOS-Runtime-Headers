// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AROBJECTANCHOR_H
#define AROBJECTANCHOR_H



#import "ARAnchor.h"
#import "ARReferenceObject.h"

@interface ARObjectAnchor : ARAnchor

@property (readonly, nonatomic) ARReferenceObject *referenceObject; // ivar: _referenceObject


+(BOOL)supportsSecureCoding;
-(BOOL)isTracked;
-(id)description;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReferenceObject:(id)arg0 transform:(struct ? )arg1 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif