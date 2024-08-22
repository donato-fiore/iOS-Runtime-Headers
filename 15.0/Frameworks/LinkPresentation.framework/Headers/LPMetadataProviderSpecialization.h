// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPMETADATAPROVIDERSPECIALIZATION_H
#define LPMETADATAPROVIDERSPECIALIZATION_H

@class NSURL;
@protocol LPMetadataProviderSpecializationDelegate;

#import <Foundation/Foundation.h>

#import "LPMetadataProviderSpecializationContext.h"

@interface LPMetadataProviderSpecialization : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) LPMetadataProviderSpecializationContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<LPMetadataProviderSpecializationDelegate> *delegate; // ivar: _delegate


+(BOOL)generateSpecializedMetadataForCompleteMetadata:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
+(NSUInteger)specialization;
+(id)specializedMetadataProviderForMetadata:(id)arg0 withContext:(id)arg1 ;
+(id)specializedMetadataProviderForResourceWithContext:(id)arg0 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif