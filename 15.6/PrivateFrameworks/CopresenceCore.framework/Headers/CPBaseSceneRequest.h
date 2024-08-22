// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPBASESCENEREQUEST_H
#define CPBASESCENEREQUEST_H

@class NSString;
@protocol CPArchivable, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPBaseSceneRequest : NSObject <CPArchivable, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *sceneId; // ivar: _sceneId
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_deserializeFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualRequest:(id)arg0 ;
-(id)_serialize;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleId:(id)arg0 sceneId:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)initWithBundleId:(id)arg0 sceneId:(id)arg1 isEnabled:(BOOL)arg2 bundleVersion:(id)arg3 buildversion:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif