// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWCOLLABORATIONSERVICESOURCE_H
#define _SWCOLLABORATIONSERVICESOURCE_H

@class SWBaseCollaborationSource;
@protocol _SWCollaborationService;



@interface _SWCollaborationServiceSource : SWBaseCollaborationSource <_SWCollaborationService>





-(id)interface;
-(id)requiredEntitlement;
-(id)serviceName;
-(void)collaborationMetadataWithCompletionHandler:(id)arg0 ;


@end


#endif