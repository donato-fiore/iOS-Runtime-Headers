// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC23SIRIREFERENCERESOLUTION17RRANNOTATEDENTITY_H
#define _TTC23SIRIREFERENCERESOLUTION17RRANNOTATEDENTITY_H

@class NSString, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface _TtC23SiriReferenceResolution17RRAnnotatedEntity : NSObject {
    ? id;
    ? appBundleId;
    ? usoEntity;
    ? dataType;
    ? data;
    ? group;
    ? annotations;
    ? saliencyComputedAt;
}


@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *dataType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, copy) NSDate *mentionedAt;
@property (nonatomic, copy) NSDate *notificationReceivedAt;
@property (nonatomic, copy) NSDate *nowPlayingAt;
@property (nonatomic, copy) NSDate *onscreenAt;
@property (nonatomic, copy) NSDate *saliencyComputedAt;
@property (nonatomic) CGFloat saliencyScore; // ivar: saliencyScore


-(id)init;
-(void)setAnnotationWithKey:(id)arg0 value:(id)arg1 ;
-(void)update:(id)arg0 ;


@end


#endif