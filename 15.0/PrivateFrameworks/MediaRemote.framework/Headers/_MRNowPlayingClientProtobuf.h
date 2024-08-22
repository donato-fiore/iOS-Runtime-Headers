// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRNOWPLAYINGCLIENTPROTOBUF_H
#define _MRNOWPLAYINGCLIENTPROTOBUF_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "_MRColorProtobuf.h"

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSMutableArray *extendedBundleIdentifierHierarchys; // ivar: _extendedBundleIdentifierHierarchys
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasIconURL;
@property (nonatomic) BOOL hasIsEmptyDeprecated;
@property (nonatomic) BOOL hasNowPlayingVisibility;
@property (readonly, nonatomic) BOOL hasParentApplicationBundleIdentifier;
@property (nonatomic) BOOL hasProcessIdentifier;
@property (nonatomic) BOOL hasProcessUserIdentifier;
@property (readonly, nonatomic) BOOL hasTintColor;
@property (retain, nonatomic) NSString *iconURL; // ivar: _iconURL
@property (nonatomic) BOOL isEmptyDeprecated; // ivar: _isEmptyDeprecated
@property (nonatomic) int nowPlayingVisibility; // ivar: _nowPlayingVisibility
@property (retain, nonatomic) NSString *parentApplicationBundleIdentifier; // ivar: _parentApplicationBundleIdentifier
@property (nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (nonatomic) int processUserIdentifier; // ivar: _processUserIdentifier
@property (retain, nonatomic) _MRColorProtobuf *tintColor; // ivar: _tintColor


+(Class)extendedBundleIdentifierHierarchyType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)extendedBundleIdentifierHierarchyAtIndex:(NSUInteger)arg0 ;
-(id)nowPlayingVisibilityAsString:(int)arg0 ;
-(int)StringAsNowPlayingVisibility:(id)arg0 ;
-(void)addExtendedBundleIdentifierHierarchy:(id)arg0 ;
-(void)clearExtendedBundleIdentifierHierarchys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif