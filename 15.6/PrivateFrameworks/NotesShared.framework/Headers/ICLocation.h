// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLOCATION_H
#define ICLOCATION_H

@class NSManagedObject, NSString, CLPlacemark, NSData;



@interface ICLocation : NSManagedObject

@property (readonly, nonatomic) NSString *formattedAddress;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (retain, nonatomic) CLPlacemark *placemark; // ivar: _placemark
@property (retain, nonatomic) NSData *placemarkData;
@property (nonatomic) BOOL updatingPlace; // ivar: updatingPlace


+(id)searchStringsForPlacemark:(id)arg0 ;
-(id)searchStrings;
-(void)didTurnIntoFault;
-(void)setLocationFromPlacemark:(id)arg0 ;
-(void)setLocationFromURL:(id)arg0 ;


@end


#endif