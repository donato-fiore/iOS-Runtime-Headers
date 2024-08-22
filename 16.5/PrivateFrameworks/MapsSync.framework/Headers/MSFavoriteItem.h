// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSFAVORITEITEM_H
#define MSFAVORITEITEM_H

@class TtC8MapsSync14MapsSyncObject, NSString, NSNumber, GEOMapItemStorage;



@interface MSFavoriteItem : TtC8MapsSync14MapsSyncObject {
    ? _customName;
    ? _hidden;
    ? _latitude;
    ? _longitude;
    ? _muid;
    ? _originatingAddressString;
    ? _positionIndex;
    ? _shortcutIdentifier;
    ? _source;
    ? _type;
    ? _version;
    ? _mapItemStorage;
    ? _handleChanges;
}


@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;


+(Class)managedClass;
+(id)findDuplicatesWithContext:(id)arg0 ;
+(id)mergeWithDuplicates:(id)arg0 ;
+(id)optionsWith:(id)arg0 ;
+(id)strippedMapItemWith:(id)arg0 ;
-(id)fetchContactHandles;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 customName:(id)arg1 hidden:(BOOL)arg2 latitude:(id)arg3 longitude:(id)arg4 muid:(id)arg5 originatingAddressString:(id)arg6 positionIndex:(NSInteger)arg7 shortcutIdentifier:(id)arg8 source:(short)arg9 type:(short)arg10 version:(short)arg11 ;
-(void)addContactHandle:(id)arg0 ;
-(void)flushChanges;
-(void)onFirstSaveWithObject:(id)arg0 context:(id)arg1 ;
-(void)removeContactHandle:(id)arg0 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif