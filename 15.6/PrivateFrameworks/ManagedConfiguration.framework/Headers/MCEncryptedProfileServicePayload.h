// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCENCRYPTEDPROFILESERVICEPAYLOAD_H
#define MCENCRYPTEDPROFILESERVICEPAYLOAD_H

@class NSString;


#import "MCPayload.h"

@interface MCEncryptedProfileServicePayload : MCPayload {
    NSString *_urlString;
}




+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithURLString:(id)arg0 profile:(id)arg1 ;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)title;
-(id)verboseDescription;


@end


#endif