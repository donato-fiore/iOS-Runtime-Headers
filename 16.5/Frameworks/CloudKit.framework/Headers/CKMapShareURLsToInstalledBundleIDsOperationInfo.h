// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMAPSHAREURLSTOINSTALLEDBUNDLEIDSOPERATIONINFO_H
#define CKMAPSHAREURLSTOINSTALLEDBUNDLEIDSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;


#import "CKOperationInfo.h"

@interface CKMapShareURLsToInstalledBundleIDsOperationInfo : CKOperationInfo <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *shareURLs; // ivar: _shareURLs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif