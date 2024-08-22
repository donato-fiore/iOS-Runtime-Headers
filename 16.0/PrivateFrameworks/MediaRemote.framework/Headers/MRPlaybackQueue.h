// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRPLAYBACKQUEUE_H
#define MRPLAYBACKQUEUE_H

@class NSArray, NSData, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_MRPlaybackQueueContextProtobuf.h"
#import "MRPlayerPath.h"

@interface MRPlaybackQueue : NSObject <NSCopying, NSSecureCoding>

 {
    _MRPlaybackQueueContextProtobuf *_context;
}


@property (readonly, copy, nonatomic) NSArray *contentItemIdentifiers;
@property (copy, nonatomic) NSArray *contentItems; // ivar: _contentItems
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasLocation; // ivar: _hasLocation
@property (nonatomic) NSInteger location; // ivar: _location
@property (readonly, copy, nonatomic) NSString *minimalReadableDescription;
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (copy, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (readonly, nonatomic) _NSRange range;
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath; // ivar: _resolvedPlayerPath


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)contentItemForIdentifier:(id)arg0 ;
-(id)contentItemWithOffset:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentItem:(id)arg0 ;
-(id)initWithContentItems:(id)arg0 ;
-(id)initWithContentItems:(id)arg0 location:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)participantForIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;


@end


#endif