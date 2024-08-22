// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDMAPANNOTATION_H
#define MSDMAPANNOTATION_H

@class NSString;
@protocol MKAnnotation;

#import <Foundation/Foundation.h>

#import "MSDStoreInfo.h"

@interface MSDMapAnnotation : NSObject <MKAnnotation>



@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MSDStoreInfo *storeInfo; // ivar: _storeInfo
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isSameLocation:(id)arg0 ;
-(id)initWithStoreInfo:(id)arg0 ;


@end


#endif