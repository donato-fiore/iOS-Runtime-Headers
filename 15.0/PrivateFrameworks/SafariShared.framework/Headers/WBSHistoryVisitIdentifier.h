// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYVISITIDENTIFIER_H
#define WBSHISTORYVISITIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WBSHistoryItem.h"
#import "WBSHistoryVisit.h"

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _hash;
}


@property (retain, nonatomic) WBSHistoryItem *associatedHistoryItem; // ivar: _associatedHistoryItem
@property (retain, nonatomic) WBSHistoryVisit *associatedHistoryVisit; // ivar: _associatedHistoryVisit
@property (readonly, copy, nonatomic) NSString *urlString; // ivar: _urlString
@property (readonly, nonatomic) CGFloat visitTime; // ivar: _visitTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLString:(id)arg0 visitTime:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif