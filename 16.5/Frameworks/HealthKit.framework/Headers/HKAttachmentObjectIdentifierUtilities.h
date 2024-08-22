// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKATTACHMENTOBJECTIDENTIFIERUTILITIES_H
#define HKATTACHMENTOBJECTIDENTIFIERUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKAttachmentObjectIdentifierUtilities : NSObject



+(BOOL)componentsFromAttachmentObjectIdentifier:(id)arg0 sampleTypeIdentifier:(*id)arg1 bundleIdentifier:(*id)arg2 FHIRIdentifier:(*id)arg3 ;
+(id)_attachmentObjectIdentifierWithSampleTypeIdentifier:(id)arg0 bundleIdentifier:(id)arg1 FHIRResourceType:(id)arg2 FHIRResourceIdentifier:(id)arg3 ;
+(id)attachmentObjectIdentifierForClinicalRecord:(id)arg0 ;
+(id)attachmentObjectIdentifierForMedicalRecord:(id)arg0 ;


@end


#endif