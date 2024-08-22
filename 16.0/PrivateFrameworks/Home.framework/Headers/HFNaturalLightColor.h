// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFNATURALLIGHTCOLOR_H
#define HFNATURALLIGHTCOLOR_H

@class NSString;
@protocol HFColorLikeObject, NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFNaturalLightColor : NSObject <HFColorLikeObject, NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif