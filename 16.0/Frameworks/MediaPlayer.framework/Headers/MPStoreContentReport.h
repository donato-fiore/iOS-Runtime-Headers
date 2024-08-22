// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTORECONTENTREPORT_H
#define MPSTORECONTENTREPORT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPStoreContentReport : NSObject <NSCopying>



@property (copy, nonatomic) NSString *aucType; // ivar: _aucType
@property (copy, nonatomic) NSString *commentText; // ivar: _commentText
@property (nonatomic) NSInteger concernItemType; // ivar: _concernItemType
@property (copy, nonatomic) NSString *concernTypeID; // ivar: _concernTypeID
@property (copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (copy, nonatomic) NSString *displayText; // ivar: _displayText
@property (copy, nonatomic) NSString *userID; // ivar: _userID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif