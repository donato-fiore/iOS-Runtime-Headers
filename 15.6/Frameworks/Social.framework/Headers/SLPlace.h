// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLPLACE_H
#define SLPLACE_H

@class NSString, NSURL;
@protocol MKAnnotation, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding>



@property (retain) NSString *category; // ivar: _category
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat distance; // ivar: _distance
@property (readonly) NSUInteger hash;
@property (retain) NSString *identifier; // ivar: _identifier
@property CGFloat latitude; // ivar: _latitude
@property CGFloat longitude; // ivar: _longitude
@property (retain) NSString *name; // ivar: _name
@property (retain) NSURL *pictureURL; // ivar: _pictureURL
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)encodableProperties;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif