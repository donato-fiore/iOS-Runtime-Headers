// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFWATCHLISTBUTTONITEM_H
#define SFWATCHLISTBUTTONITEM_H

@class NSString, NSDictionary, NSData;
@protocol SFWatchListButtonItem, NSSecureCoding, NSCopying;


#import "SFButtonItem.h"
#import "SFWatchListItem.h"

@interface SFWatchListButtonItem : SFButtonItem <SFWatchListButtonItem, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueId;
@property (retain, nonatomic) SFWatchListItem *watchListItem; // ivar: _watchListItem


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif