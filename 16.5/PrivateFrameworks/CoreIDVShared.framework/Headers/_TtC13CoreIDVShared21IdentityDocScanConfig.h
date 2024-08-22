// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13COREIDVSHARED21IDENTITYDOCSCANCONFIG_H
#define _TTC13COREIDVSHARED21IDENTITYDOCSCANCONFIG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared21IdentityDocScanConfig : NSObject <NSSecureCoding>

 {
    ? pdf417ParsingConfigs;
    ? requiresPDF417;
    ? requiresAAMVACompliant;
    ? requiresStateMatch;
    ? issuerIdentificationNumber;
    ? crTimeout;
    ? maxRetakeCount;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif