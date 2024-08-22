// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SGDCLOUDKITSYNCPERSISTEDSTATE_H
#define _SGDCLOUDKITSYNCPERSISTEDSTATE_H

@class NSNumber, NSString, NSData, CKRecordID, CKServerChangeToken;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SGDCloudKitSyncPersistedState : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *changeCallback; // ivar: _changeCallback
@property (retain, nonatomic) NSNumber *eventsWereRemovedFromEventKit; // ivar: _eventsWereRemovedFromEventKit
@property (retain, nonatomic) NSNumber *hasDeferredProcessStateChanges; // ivar: _hasDeferredProcessStateChanges
@property (retain, nonatomic) NSNumber *hasDeferredSync; // ivar: _hasDeferredSync
@property (retain, nonatomic) NSNumber *hasSubscription; // ivar: _hasSubscription
@property (retain, nonatomic) NSString *primaryICloudCalendarAccount; // ivar: _primaryICloudCalendarAccount
@property (retain, nonatomic) NSData *salt; // ivar: _salt
@property (retain, nonatomic) CKRecordID *saltAtomicReferenceId; // ivar: _saltAtomicReferenceId
@property (retain, nonatomic) NSNumber *saltUsesManatee; // ivar: _saltUsesManatee
@property (retain, nonatomic) CKServerChangeToken *syncToken; // ivar: _syncToken


+(BOOL)supportsSecureCoding;
+(id)properties;
-(SEL)_getterForProperty:(struct objc_property *)arg0 ;
-(SEL)_setterForProperty:(struct objc_property *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setupKvo;
-(void)stopKvo;


@end


#endif