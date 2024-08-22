// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _KSFILEDIRECTORY_H
#define _KSFILEDIRECTORY_H

@class KSFileEntry, NSMutableDictionary, NSArray;
@protocol NSSecureCoding, NSFastEnumeration;



@interface _KSFileDirectory : KSFileEntry <NSSecureCoding, NSFastEnumeration>

 {
    NSMutableDictionary *_contents;
}


@property (readonly, retain, nonatomic) NSArray *contents;


+(BOOL)supportsSecureCoding;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)description;
-(id)entryForName:(id)arg0 ;
// -(id)findEntryWithComparison:(id)arg0 recursively:(unk)arg1  ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDirectory:(id)arg0 captureContents:(BOOL)arg1 storeRoot:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)consistencyCheck;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performOnEverything:(id)arg0 ;
-(void)removeEntryWithName:(id)arg0 ;
-(void)restoreToPath:(id)arg0 ;


@end


#endif