// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSMAPSPREDICTIONCONTEXT_H
#define _PSMAPSPREDICTIONCONTEXT_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSMapsPredictionContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *navigationEndLocationId; // ivar: _navigationEndLocationId
@property (copy, nonatomic) NSString *navigationStartLocationId; // ivar: _navigationStartLocationId
@property (copy, nonatomic) NSDate *suggestionDate; // ivar: _suggestionDate


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif