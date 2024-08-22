// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUMUTABLEDOWNLOADMETADATA_H
#define SUMUTABLEDOWNLOADMETADATA_H



#import "SUDownloadMetadata.h"

@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (nonatomic, getter=isAutoDownload) BOOL autoDownload;
@property (nonatomic) int downloadFeeAgreementStatus;
@property (nonatomic, getter=isDownloadOnly) BOOL downloadOnly;
@property (nonatomic) BOOL enforceWifiOnlyOverride;
@property (nonatomic) int termsAndConditionsAgreementStatus;


-(id)initWithMetadata:(id)arg0 ;
-(void)applyDownloadPolicy:(id)arg0 ;


@end


#endif