// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEMARK_H
#define MKPLACEMARK_H

@class CLPlacemark, NSString;
@protocol MKAnnotation;



@interface MKPlacemark : CLPlacemark <MKAnnotation>



@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 addressDictionary:(id)arg1 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 postalAddress:(id)arg1 ;
-(id)mkPostalAddressDictionary;
-(id)thoroughfare;


@end


#endif