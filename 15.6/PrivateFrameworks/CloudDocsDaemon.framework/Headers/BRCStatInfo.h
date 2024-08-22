// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSTATINFO_H
#define BRCSTATINFO_H

@class BRMangledID, NSString, BRCUserRowID, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BRFieldCKInfo.h"
#import "BRCItemID.h"

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BRMangledID *_aliasTargetMangledID;
@property (readonly, nonatomic) NSString *aliasTarget; // ivar: _aliasTarget
@property (nonatomic) NSInteger birthtime; // ivar: _birthtime
@property (retain, nonatomic) BRFieldCKInfo *ckInfo; // ivar: _ckInfo
@property (retain, nonatomic) BRCUserRowID *creatorRowID; // ivar: _creatorRowID
@property (nonatomic) NSInteger favoriteRank; // ivar: _favoriteRank
@property (retain, nonatomic) NSData *finderTags; // ivar: _finderTags
@property (nonatomic, getter=isHiddenExt) BOOL hiddenExt; // ivar: _hiddenExt
@property (readonly, nonatomic) BOOL iWorkShareable;
@property (nonatomic) NSInteger lastUsedTime; // ivar: _lastUsedTime
@property (retain, nonatomic) NSData *lazyXattr; // ivar: _lazyXattr
@property (retain, nonatomic) NSString *logicalName; // ivar: _logicalName
@property (nonatomic) char mode; // ivar: _mode
@property (retain, nonatomic) BRCItemID *parentID; // ivar: _parentID
@property (readonly, nonatomic) NSString *representableName;
@property (nonatomic) char state; // ivar: _state
@property (retain, nonatomic) BRCItemID *trashPutBackParentID; // ivar: _trashPutBackParentID
@property (retain, nonatomic) NSString *trashPutBackPath; // ivar: _trashPutBackPath
@property (nonatomic) char type; // ivar: _type
@property (retain, nonatomic) NSData *xattrSignature; // ivar: _xattrSignature


+(BOOL)supportsSecureCoding;
-(BOOL)check:(id)arg0 logToFile:(struct __sFILE *)arg1 ;
-(BOOL)checkStateWithItemID:(id)arg0 logToFile:(struct __sFILE *)arg1 ;
-(BOOL)isEtagEqual:(id)arg0 ;
-(BOOL)isExecutable;
-(BOOL)isWritable;
-(NSUInteger)diffAgainst:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithContext:(id)arg0 origName:(id)arg1 ;
-(id)displayName;
-(id)initFromResultSet:(id)arg0 pos:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatInfo:(id)arg0 ;
-(void)_updateAliasTarget:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif