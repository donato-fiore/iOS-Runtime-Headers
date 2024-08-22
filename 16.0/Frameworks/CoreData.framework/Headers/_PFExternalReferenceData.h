// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFEXTERNALREFERENCEDATA_H
#define _PFEXTERNALREFERENCEDATA_H

@class NSData, NSString;
@protocol NSCopying, NSMutableCopying;



@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying>

 {
    NSData *_originalData;
    *void _bytesPtrForStore;
    NSUInteger _bytesLengthForStore;
    *void _bytesPtrForExternalReference;
    NSUInteger _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id *_ubiquitousLocation;
    __externalDataFlags _externalDataFlags;
}




+(Class)classForKeyedUnarchiver;
-(*void)_bytesPtrForExternalReference;
-(*void)_bytesPtrForStore;
-(*void)bytes;
-(BOOL)_createdByUbiquityImport;
-(BOOL)hasExternalReferenceContent;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToData:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)_bytesLengthForExternalReference;
-(NSUInteger)_bytesLengthForStore;
-(NSUInteger)length;
-(char *)_externalReferenceLocation;
-(char *)_safeguardLocation;
-(id)UUID;
-(id)_originalData;
-(id)_safeguardLocationString;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)databaseValue;
-(id)description;
-(id)externalReferenceLocationString;
-(id)initForExternalLocation:(id)arg0 safeguardLocation:(id)arg1 data:(id)arg2 protectionLevel:(int)arg3 ;
-(id)initForUbiquityDictionary:(id)arg0 store:(id)arg1 ;
-(id)initWithStoreBytes:(*void)arg0 length:(NSUInteger)arg1 externalLocation:(id)arg2 safeguardLocation:(id)arg3 protectionLevel:(int)arg4 ;
-(id)initWithStoreBytes:(*void)arg0 length:(NSUInteger)arg1 externalLocation:(id)arg2 safeguardLocation:(id)arg3 protectionLevel:(int)arg4 ubiquitousLocation:(id)arg5 ;
-(id)mutableCopy;
-(id)subdataWithRange:(struct _NSRange )arg0 ;
-(int)preferredProtectionLevel;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_setBytesForExternalReference:(*void)arg0 ;
-(void)_writeExternalReferenceToInterimLocation;
-(void)dealloc;
-(void)doCleanupOnDealloc;
-(void)getBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)getBytes:(*void)arg0 range:(struct _NSRange )arg1 ;


@end


#endif