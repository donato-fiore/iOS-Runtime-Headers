// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCONTINUATIONMETADATABASE_H
#define WLKCONTINUATIONMETADATABASE_H

@class NSURL, NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>

#import "WLKBasicContentMetadata.h"

@interface WLKContinuationMetadataBase : NSObject

@property (readonly, nonatomic) NSURL *contentTVAppDeeplinkURL; // ivar: _contentTVAppDeeplinkURL
@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSInteger contextEnum; // ivar: _contextEnum
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) BOOL isPurchase; // ivar: _isPurchase
@property (readonly, nonatomic) BOOL isRental; // ivar: _isRental
@property (readonly, copy, nonatomic) NSString *localizedContext; // ivar: _localizedContext
@property (readonly, nonatomic) WLKBasicContentMetadata *movieOrShowContent; // ivar: _movieOrShowContent
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(NSInteger)_contextForString:(id)arg0 ;
+(void)add:(id)arg0 toCollection:(id)arg1 ;
+(void)remove:(id)arg0 fromCollection:(id)arg1 ;
-(id)_mergingIdentifier;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;


@end


#endif