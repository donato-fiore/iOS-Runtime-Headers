// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTDESTINATION_H
#define AMSENGAGEMENTDESTINATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSEngagementDestination : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsResponse; // ivar: _allowsResponse
@property (nonatomic) NSUInteger components; // ivar: _components
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif