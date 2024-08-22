// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCNATIVEREPRESENTATION_H
#define APPCNATIVEREPRESENTATION_H

@class NSString;


#import "APPCContentRepresentation.h"

@interface APPCNativeRepresentation : APPCContentRepresentation {
    ? articleID;
    ? articleTitle;
    ? advertiserName;
    ? campaignData;
}


@property (nonatomic, readonly) NSString *advertiserName;
@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) NSString *articleTitle;
@property (nonatomic, readonly) NSString *campaignData;


-(id)initWithIdentifier:(id)arg0 adType:(NSInteger)arg1 desiredPosition:(NSInteger)arg2 privacyMarkerPosition:(NSInteger)arg3 articleID:(id)arg4 articleTitle:(id)arg5 adSponsor:(id)arg6 campaignData:(id)arg7 adSize:(struct CGSize )arg8 ;


@end


#endif