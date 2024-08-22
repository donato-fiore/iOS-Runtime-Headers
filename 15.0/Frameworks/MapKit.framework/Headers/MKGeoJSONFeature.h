// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKGEOJSONFEATURE_H
#define MKGEOJSONFEATURE_H

@class NSString, NSArray, NSData;
@protocol MKGeoJSONObject;

#import <Foundation/Foundation.h>


@interface MKGeoJSONFeature : NSObject <MKGeoJSONObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *properties; // ivar: _properties
@property (readonly) Class superclass;


-(id)_initWithGeoJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)_initWithProperties:(id)arg0 geometry:(id)arg1 identifier:(id)arg2 ;


@end


#endif