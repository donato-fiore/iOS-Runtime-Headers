// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIMODALENTRYPOINTPOSTERSELECTION_H
#define PRUIMODALENTRYPOINTPOSTERSELECTION_H

@class NSSet, NSString, NSUUID;
@protocol PRUIModalEntryPoint;

#import <Foundation/Foundation.h>


@interface PRUIModalEntryPointPosterSelection : NSObject <PRUIModalEntryPoint>



@property (readonly, copy, nonatomic) NSSet *allowedConfigurationUUIDs; // ivar: _allowedConfigurationUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *selectedConfigurationUUID; // ivar: _selectedConfigurationUUID
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAllowedConfigurationUUIDs:(id)arg0 ;
-(id)initWithAllowedConfigurationUUIDs:(id)arg0 selectedConfigurationUUID:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif