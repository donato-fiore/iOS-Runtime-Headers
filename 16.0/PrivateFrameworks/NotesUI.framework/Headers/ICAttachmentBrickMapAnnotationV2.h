// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATTACHMENTBRICKMAPANNOTATIONV2_H
#define ICATTACHMENTBRICKMAPANNOTATIONV2_H

@class NSString;
@protocol MKAnnotation;

#import <Foundation/Foundation.h>


@interface ICAttachmentBrickMapAnnotationV2 : NSObject <MKAnnotation>



@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithAttachment:(id)arg0 ;


@end


#endif