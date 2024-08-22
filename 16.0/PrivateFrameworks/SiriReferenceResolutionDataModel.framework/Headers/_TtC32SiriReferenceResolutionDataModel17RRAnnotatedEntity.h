// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC32SIRIREFERENCERESOLUTIONDATAMODEL17RRANNOTATEDENTITY_H
#define _TTC32SIRIREFERENCERESOLUTIONDATAMODEL17RRANNOTATEDENTITY_H

@class NSString, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface _TtC32SiriReferenceResolutionDataModel17RRAnnotatedEntity : NSObject {
    ? id;
    ? appBundleId;
    ? usoEntity;
    ? dataType;
    ? data;
    ? group;
    ? metadata;
    ? saliencyComputedAt;
    ? onScreenSaliencyAdjustment;
    ? annotations;
    ? userId;
}


@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *dataType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, copy) NSDate *mentionedAt;
@property (nonatomic, copy) NSDate *notificationReceivedAt;
@property (nonatomic, copy) NSDate *nowPlayingAt;
@property (nonatomic, copy) NSDate *onscreenAt;
@property (nonatomic, copy) NSDate *saliencyComputedAt;
@property (nonatomic) CGFloat score; // ivar: score
@property (nonatomic, copy) NSString *userId;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(void)setDateAnnotationWithKey:(id)arg0 value:(id)arg1 ;


@end


#endif