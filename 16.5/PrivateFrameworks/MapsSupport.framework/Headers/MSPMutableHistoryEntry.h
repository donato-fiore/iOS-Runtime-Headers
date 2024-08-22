// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMUTABLEHISTORYENTRY_H
#define MSPMUTABLEHISTORYENTRY_H

@class NSUUID, NSString, NSDate;
@protocol MSPHistoryEntry, MSPMutableObject;

#import <Foundation/Foundation.h>

#import "MSPHistoryEntryStorage.h"

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject>

 {
    NSUUID *_storageIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_isImmutable) BOOL immutable; // ivar: _immutable
@property (readonly, nonatomic) MSPHistoryEntryStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (nonatomic, getter=tracksRAPReportingOnly) BOOL tracksRAPReportingOnly;
@property (copy, nonatomic) NSDate *usageDate; // ivar: _usageDate


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableHistoryEntryForStorage:(id)arg0 ;
+(id)mutableObjectProtocol;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg0 ;
-(BOOL)isFailed;
-(BOOL)isUserVisibleDuplicateOfEntry:(id)arg0 ;
-(id)copyIfValidWithError:(*id)arg0 ;
-(id)debugTitle;
-(id)init;
-(id)initWithStorage:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;
-(void)_markImmutable;
-(void)_noteWillMutate;
// -(void)ifMutableSearch:(id)arg0 ifMutableRoute:(unk)arg1 ifMutablePlaceDisplay:(id)arg2 ifMutableTransitLineItem:(unk)arg3  ;
// -(void)ifSearch:(id)arg0 ifRoute:(unk)arg1 ifPlaceDisplay:(id)arg2 ifTransitLineItem:(unk)arg3  ;


@end


#endif