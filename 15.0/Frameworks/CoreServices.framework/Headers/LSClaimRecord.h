// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSCLAIMRECORD_H
#define LSCLAIMRECORD_H

@class NSArray, NSString, NSDictionary, NSURL;


#import "LSRecord.h"
#import "LSBundleRecord.h"
#import "_LSLocalizedStringRecord.h"

@interface LSClaimRecord : LSRecord {
    LSBundleRecord *_weakClaimingBundleRecord;
}


@property (readonly) NSArray *URLSchemes;
@property (readonly) LSBundleRecord *_claimingBundleRecord;
@property (readonly) _LSLocalizedStringRecord *_localizedName;
@property (readonly) LSBundleRecord *claimingBundleRecord;
@property (readonly, nonatomic) id *compatibilityObject;
@property (readonly) NSString *handlerRank;
@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSURL *iconResourceBundleURL;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned int role;
@property (readonly) NSArray *typeIdentifiers;


+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)URLSchemesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)_claimingBundleRecordWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)_localizedNameWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)handlerRankWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)iconDictionaryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)iconResourceBundleURLWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)localizedNameWithPreferredLocalizations:(id)arg0 ;
-(id)typeIdentifiersWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(unsigned int)roleWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;


@end


#endif