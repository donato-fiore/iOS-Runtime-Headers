// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTEXTOBSERVATION_H
#define VNTEXTOBSERVATION_H

@class NSArray, NSString;


#import "VNRectangleObservation.h"

@interface VNTextObservation : VNRectangleObservation {
    NSArray *_characterBoxes;
    NSString *_text;
}


@property (copy, nonatomic) NSArray *characterBoxes;
@property (readonly, copy, nonatomic) NSString *text;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif