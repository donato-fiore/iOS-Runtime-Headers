// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMEDIALINK_H
#define GEOMEDIALINK_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GEOMediaLink : NSObject

@property (readonly, nonatomic) NSString *adamID; // ivar: _adamID
@property (readonly, nonatomic) int mediaSubType; // ivar: _mediaSubType
@property (readonly, nonatomic) int mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSUInteger position; // ivar: _position
@property (readonly, nonatomic) NSInteger relatedCollectionItemIndex; // ivar: _relatedCollectionItemIndex
@property (readonly, nonatomic) NSArray *thirdPartyLinks; // ivar: _thirdPartyLinks


+(id)mediaLinkFromProto:(id)arg0 ;
-(id)initWithAdamID:(id)arg0 mediaType:(int)arg1 mediaSubType:(int)arg2 thirdPartyLinks:(id)arg3 relatedCollectionItemIndex:(NSInteger)arg4 position:(NSUInteger)arg5 ;


@end


#endif