// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDISPLAYREPRESENTATIONFETCHRESULT_H
#define LNDISPLAYREPRESENTATIONFETCHRESULT_H

@class LNAction, LNDisplayRepresentation, NSError;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNDisplayRepresentationFetchResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) LNDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 displayRepresentation:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif