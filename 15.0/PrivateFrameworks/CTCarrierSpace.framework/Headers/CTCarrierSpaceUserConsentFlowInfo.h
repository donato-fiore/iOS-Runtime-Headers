// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCARRIERSPACEUSERCONSENTFLOWINFO_H
#define CTCARRIERSPACEUSERCONSENTFLOWINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceUserConsentFlowInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *postData; // ivar: _postData
@property (retain, nonatomic) NSString *webURL; // ivar: _webURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif