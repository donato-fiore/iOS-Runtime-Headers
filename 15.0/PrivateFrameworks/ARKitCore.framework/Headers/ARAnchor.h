// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARANCHOR_H
#define ARANCHOR_H

@class NSUUID, NSString;
@protocol ARDaemonSecureCoding, ARAnchorCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARAnchor : NSObject <ARDaemonSecureCoding, ARAnchorCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) CGFloat lastUpdateTimestamp; // ivar: _lastUpdateTimestamp
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) ? referenceTransform; // ivar: _referenceTransform
@property (retain, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) ? transform; // ivar: _transform


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAnchor:(id)arg0 ;
-(NSUInteger)hash;
-(id)_description:(BOOL)arg0 ;
-(id)copyWithTrackedState:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg0 transform:(struct ? )arg1 ;
-(id)initWithTransform:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif