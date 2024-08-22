// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKTESTCONTENTDATABASEFEEDCURSOR_H
#define FCCKTESTCONTENTDATABASEFEEDCURSOR_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCCKTestContentDatabaseFeedCursor : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSNumber *order; // ivar: _order
@property (copy, nonatomic) NSNumber *subOrder; // ivar: _subOrder


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif