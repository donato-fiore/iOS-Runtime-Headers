// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONALERTOPTIONS_H
#define NCNOTIFICATIONALERTOPTIONS_H

@class NSUUID, NSString;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NCNotificationAlertOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSUUID *activeModeUUID; // ivar: _activeModeUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) BOOL shouldSuppress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger suppression; // ivar: _suppression


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationAlertOptions:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif