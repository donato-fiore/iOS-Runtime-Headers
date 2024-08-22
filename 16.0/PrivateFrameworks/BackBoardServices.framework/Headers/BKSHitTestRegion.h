// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHITTESTREGION_H
#define BKSHITTESTREGION_H

@class NSString;
@protocol BSDescriptionStreamable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSHitTestRegion : NSObject <BSDescriptionStreamable, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect exclusiveTouchNormalizedSubRect; // ivar: _exclusiveTouchNormalizedSubRect
@property (readonly, nonatomic, getter=_exclusiveTouchNormalizedSubRectInReferenceSpace) CGRect exclusiveTouchNormalizedSubRectInReferenceSpace; // ivar: _exclusiveTouchNormalizedSubRectInReferenceSpace
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect rect; // ivar: _rect
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithRect:(struct CGRect )arg0 exclusiveTouchNormalizedSubRect:(struct CGRect )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithRect:(struct CGRect )arg0 exclusiveTouchSubRect:(struct CGRect )arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif