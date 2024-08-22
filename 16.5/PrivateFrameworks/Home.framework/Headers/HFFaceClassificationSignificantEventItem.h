// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFFACECLASSIFICATIONSIGNIFICANTEVENTITEM_H
#define HFFACECLASSIFICATIONSIGNIFICANTEVENTITEM_H

@class NSString, HMFaceClassification, UIImage, HMHome, HMPerson, HMPersonManager;
@protocol HFPersonLikeItem;


#import "HFCameraClipSignificantEventItem.h"

@interface HFFaceClassificationSignificantEventItem : HFCameraClipSignificantEventItem <HFPersonLikeItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) HMFaceClassification *faceClassification;
@property (retain, nonatomic) UIImage *faceCropImage; // ivar: _faceCropImage
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly) Class superclass;


+(id)dateFormatter;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSignificantEvent:(id)arg0 home:(id)arg1 ;


@end


#endif