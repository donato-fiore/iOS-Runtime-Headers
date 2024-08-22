// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13COREIDVSHARED24IDENTITYPROOFINGUICONFIG_H
#define _TTC13COREIDVSHARED24IDENTITYPROOFINGUICONFIG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared24IdentityProofingUIConfig : NSObject <NSSecureCoding>

 {
    ? view;
    ? title;
    ? subTitle;
    ? url;
    ? primaryButtonTitle;
    ? secondaryButtonTitle;
    ? tertiaryButtonTitle;
    ? messages;
    ? fields;
    ? caption;
    ? minLength;
    ? maxLength;
    ? placeholder;
    ? displayName;
    ? imageAssetsData;
    ? options;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif