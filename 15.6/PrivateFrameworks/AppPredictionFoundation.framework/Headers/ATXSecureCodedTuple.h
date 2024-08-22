// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSECURECODEDTUPLE_H
#define ATXSECURECODEDTUPLE_H

@class PASTuple2;
@protocol NSSecureCoding;



@interface ATXSecureCodedTuple : PASTuple2 <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)allowedClassNames;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif