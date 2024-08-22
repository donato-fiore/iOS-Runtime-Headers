// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13COREIDVSHARED23IDENTITYLIVENESSRESULTS_H
#define _TTC13COREIDVSHARED23IDENTITYLIVENESSRESULTS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared23IdentityLivenessResults : NSObject <NSSecureCoding>

 {
    ? livenessLabel;
    ? assessmentsFAC;
    ? timestampsFAC;
    ? assessmentTA;
    ? assessmentsPRD;
    ? assessmentID;
    ? timestampsID;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif