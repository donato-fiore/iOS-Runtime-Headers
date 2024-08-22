// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLANEGUIDANCE_H
#define CPLANEGUIDANCE_H

@class NSString, NSArray;
@protocol CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLaneGuidance : NSObject <CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding>



@property (nonatomic) unsigned short componentID;
@property (nonatomic) unsigned short componentID; // ivar: _componentID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short index; // ivar: _index
@property (copy, nonatomic) NSArray *instructionVariants; // ivar: _instructionVariants
@property (copy, nonatomic) NSArray *lanes; // ivar: _lanes
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)accNavParameters;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif