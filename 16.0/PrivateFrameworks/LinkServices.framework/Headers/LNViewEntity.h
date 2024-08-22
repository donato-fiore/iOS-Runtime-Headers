// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNVIEWENTITY_H
#define LNVIEWENTITY_H

@class LNEntityIdentifier, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNViewEntity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) LNEntityIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *interactionId; // ivar: _interactionId
@property (readonly, nonatomic) LNViewLocation location; // ivar: _location
@property (readonly, nonatomic) NSInteger structuredDataRepresentations; // ivar: _structuredDataRepresentations


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 interactionId:(id)arg1 location:(struct LNViewLocation )arg2 ;
-(id)initWithIdentifier:(id)arg0 interactionId:(id)arg1 location:(struct LNViewLocation )arg2 structuredDataRepresentations:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif