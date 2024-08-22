// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIGROUP_H
#define PSIGROUP_H

@class NSString;


#import "PSIReusableObject.h"

@interface PSIGroup : PSIReusableObject {
    NSUInteger _compressedRanges;
    _NSRange _tokenRanges;
    NSUInteger _tokenRangesCount;
}


@property (retain, nonatomic) *__CFArray assetIds; // ivar: _assetIds
@property (nonatomic) short category; // ivar: _category
@property (retain, nonatomic) *__CFArray collectionIds; // ivar: _collectionIds
@property (readonly, nonatomic) NSString *contentString; // ivar: _contentString
@property (nonatomic) NSUInteger groupId; // ivar: _groupId
@property (readonly, nonatomic) NSString *lookupIdentifier; // ivar: _lookupIdentifier
@property (readonly, nonatomic) NSString *normalizedString; // ivar: _normalizedString
@property (nonatomic) NSUInteger owningGroupId; // ivar: _owningGroupId


+(void)_getTokenRanges:(struct _NSRange )arg0 fromCompressedRanges:(NSUInteger)arg1 ;
+(void)getCompressedRanges:(NSUInteger)arg0 fromTokenRanges:(struct ? *)arg1 count:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareToGroup:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)tokenRangesCount;
-(id)_tokenRangesDescription;
-(id)description;
-(id)init;
-(id)initWithContentString:(id)arg0 lookIdentifier:(id)arg1 category:(short)arg2 owningGroupId:(NSInteger)arg3 ;
-(struct _NSRange )tokenRangeAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)prepareFromFilenameStatement:(struct sqlite3_stmt *)arg0 ;
-(void)prepareFromStatement:(struct sqlite3_stmt *)arg0 ;
-(void)unionCollectionIdsWithGroup:(id)arg0 ;
-(void)unionIdsWithGroup:(id)arg0 ;


@end


#endif