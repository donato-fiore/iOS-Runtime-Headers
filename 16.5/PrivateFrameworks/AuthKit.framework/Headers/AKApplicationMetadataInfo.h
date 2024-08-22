// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAPPLICATIONMETADATAINFO_H
#define AKAPPLICATIONMETADATAINFO_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *authorizedAppListVersion; // ivar: _authorizedAppListVersion
@property (readonly, copy, nonatomic) NSDictionary *teams; // ivar: _teams


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif