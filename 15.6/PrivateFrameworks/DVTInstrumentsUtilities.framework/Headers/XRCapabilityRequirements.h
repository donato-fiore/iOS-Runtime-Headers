// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRCAPABILITYREQUIREMENTS_H
#define XRCAPABILITYREQUIREMENTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface XRCapabilityRequirements : NSObject {
    NSMutableDictionary *_capabilities;
    NSMutableDictionary *_unimplementedResponses;
}




+(BOOL)supportsSecureCoding;
+(id)requirementsFromContext:(id)arg0 ;
+(id)requirementsFromPlist:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkRequirementsAgainstRegistery:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)plistRepresentation;


@end


#endif