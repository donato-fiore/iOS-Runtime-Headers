// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALHIGHLIGHT_H
#define PPSOCIALHIGHLIGHT_H

@class NSArray, NSString, NSURL, NSNumber, NSDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPSocialHighlight : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *attributionIdentifiers; // ivar: _attributionIdentifiers
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSURL *resourceURL; // ivar: _resourceURL
@property (readonly, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, nonatomic) NSDictionary *supplementaryData; // ivar: _supplementaryData
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 resourceURL:(id)arg1 timestamp:(id)arg2 attributionIdentifiers:(id)arg3 supplementaryData:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 resourceURL:(id)arg1 timestamp:(id)arg2 attributionIdentifiers:(id)arg3 supplementaryData:(id)arg4 score:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif