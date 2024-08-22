// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORETRANSACTIONOPTIONS_H
#define HMDBACKINGSTORETRANSACTIONOPTIONS_H

@class HMFObject, NSString;
@protocol HMFLogging, NSSecureCoding;



@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger cdTransactionAuthor; // ivar: _cdTransactionAuthor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) BOOL mustPush; // ivar: _mustPush
@property (readonly, nonatomic) BOOL mustReplay; // ivar: _mustReplay
@property (readonly, nonatomic) BOOL mustSaveArchiveAtomically; // ivar: _mustSaveArchiveAtomically
@property (readonly, nonatomic) NSUInteger source; // ivar: _source
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)cloudRequiresPushOptions;
+(id)defaultCloudOptions;
+(id)defaultCloudOptionsForInitialGraphLoad;
+(id)defaultIDSOptions;
+(id)defaultLegacyCloudOptions;
+(id)defaultLocalOptions;
+(id)defaultMetadataCloudOptions;
+(id)defaultOutOfSyncOptions;
+(id)defaultPreferencesOptions;
+(id)defaultResidenceOptions;
+(id)defaultXPCOptions;
+(id)defaultXPCOptionsWithCDTransactionAuthor:(NSUInteger)arg0 ;
+(id)localPushBackOptions;
+(id)logCategory;
+(id)optionsWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 label:(id)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4 mustSaveArchiveAtomically:(BOOL)arg5 ;
+(id)optionsWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 label:(id)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4 mustSaveArchiveAtomically:(BOOL)arg5 cdTransactionAuthor:(NSUInteger)arg6 ;
+(id)optionsWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 mustReplay:(BOOL)arg2 mustPush:(BOOL)arg3 ;
+(id)optionsWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 mustReplay:(BOOL)arg2 mustPush:(BOOL)arg3 mustSaveArchiveAtomically:(BOOL)arg4 ;
+(id)stringForHMDBackingStoreDestination:(NSUInteger)arg0 ;
+(id)stringForHMDBackingStoreTransactionSource:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugString:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 ;
-(id)initWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 label:(id)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4 ;
-(id)initWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 label:(id)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4 mustSaveArchiveAtomically:(BOOL)arg5 ;
-(id)initWithSource:(NSUInteger)arg0 destination:(NSUInteger)arg1 label:(id)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4 mustSaveArchiveAtomically:(BOOL)arg5 cdTransactionAuthor:(NSUInteger)arg6 ;
-(id)logIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif