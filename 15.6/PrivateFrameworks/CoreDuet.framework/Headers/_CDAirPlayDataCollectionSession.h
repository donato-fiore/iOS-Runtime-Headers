// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDAIRPLAYDATACOLLECTIONSESSION_H
#define _CDAIRPLAYDATACOLLECTIONSESSION_H

@class NSString, NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDAirPlayDataCollectionSession : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_identifier;
    NSData *_salt;
    NSDate *_latestStartDate;
    NSDate *_lastCollectionDate;
    NSUInteger _batchNumber;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif