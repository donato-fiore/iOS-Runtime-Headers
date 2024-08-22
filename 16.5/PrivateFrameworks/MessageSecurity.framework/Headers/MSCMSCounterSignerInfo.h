// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCMSCOUNTERSIGNERINFO_H
#define MSCMSCOUNTERSIGNERINFO_H



#import "MSCMSSignerInfo.h"

@interface MSCMSCounterSignerInfo : MSCMSSignerInfo

@property (weak, nonatomic) MSCMSSignerInfo *containingSignerInfo; // ivar: _containingSignerInfo


-(BOOL)createRequiredAttributes:(*id)arg0 ;
-(BOOL)verifyContentTypeAttribute:(*id)arg0 ;
-(id)calculateSignerInfoDigest:(*id)arg0 ;
-(id)certificates;


@end


#endif