// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSEARCHRESULTANNOTATION_H
#define CKSEARCHRESULTANNOTATION_H

@class NSString;
@protocol MKAnnotation;

#import <Foundation/Foundation.h>


@interface CKSearchResultAnnotation : NSObject <MKAnnotation>



@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;




@end


#endif