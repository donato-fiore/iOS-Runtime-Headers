// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSTYLEOWNERPATH_H
#define TSCHSTYLEOWNERPATH_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHStyleOwnerPath : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *uuids; // ivar: _uuids


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)styleOwnerPathForSemanticTag:(id)arg0 ofChart:(id)arg1 ;
+(id)styleOwnerPathForStyleOwner:(id)arg0 ;
+(id)styleOwnerPathWithUUIDs:(id)arg0 ;
+(id)verifiedUUIDs:(id)arg0 ;
+(unsigned char)styleOwnerPathTypeForStyleOwner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)genericPropertyMapClass;
-(NSUInteger)hash;
-(id)TSUUUIDPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithUUIDs:(id)arg0 ;
-(id)p_axisStyleOwnerForChart:(id)arg0 ;
-(id)p_createUUIDDecoder;
-(id)p_referenceLineStyleOwnerForChart:(id)arg0 ;
-(id)p_seriesStyleOwnerForChart:(id)arg0 ;
-(id)pathByPrefixingWithUUIDs:(id)arg0 ;
-(id)styleOwnerForChart:(id)arg0 ;
-(int)styleOwnerType;
-(unsigned char)styleOwnerPathType;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif