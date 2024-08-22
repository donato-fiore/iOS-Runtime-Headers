// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMAPITEM_H
#define STMAPITEM_H

@class STSiriModelObject, NSString, CLLocation, NSData, NSNumber;



@interface STMapItem : STSiriModelObject {
    NSString *_title;
    CLLocation *_location;
    NSData *_placeData;
    BOOL _isCurrentLocation;
    NSNumber *_businessID;
    NSNumber *_localSearchProviderID;
}




+(BOOL)supportsSecureCoding;
-(Class)_aceCollectionClass;
-(id)_aceContextObjectValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMKMapItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif