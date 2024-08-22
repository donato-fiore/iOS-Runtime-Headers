// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYDIAGNOSTICITEM_H
#define HFACCESSORYDIAGNOSTICITEM_H

@class NSURL, NSString, HMAccessoryDiagnosticsMetadata;


#import "HFItem.h"

@interface HFAccessoryDiagnosticItem : HFItem

@property (readonly, nonatomic) NSInteger consentVersion;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) HMAccessoryDiagnosticsMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;


-(BOOL)isEligibleForUpload;
-(NSInteger)uploadType;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithLogMetadata:(id)arg0 accessory:(id)arg1 ;


@end


#endif