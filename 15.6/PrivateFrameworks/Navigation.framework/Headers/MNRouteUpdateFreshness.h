// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNROUTEUPDATEFRESHNESS_H
#define MNROUTEUPDATEFRESHNESS_H

@class NSString;
@protocol MNJSONOutput, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MNRouteUpdateFreshness : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (nonatomic) CGFloat maxDisplacement; // ivar: _maxDisplacement
@property (nonatomic) CGFloat minAccuracy; // ivar: _minAccuracy
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif