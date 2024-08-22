// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSTATUS_H
#define ATSTATUS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATStatus : NSObject <NSSecureCoding>



@property (nonatomic, getter=isAutomaticSync) BOOL automaticSync; // ivar: _automaticSync
@property (nonatomic) NSUInteger completedAssetCount; // ivar: _completedAssetCount
@property (copy, nonatomic) NSString *dataClass; // ivar: _dataClass
@property (copy, nonatomic) NSString *libraryID; // ivar: _libraryID
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (nonatomic) float progress; // ivar: _progress
@property (nonatomic) unsigned int syncStage; // ivar: _syncStage
@property (nonatomic) unsigned int syncType; // ivar: _syncType
@property (nonatomic) NSUInteger totalAssetCount; // ivar: _totalAssetCount
@property (nonatomic) NSUInteger totalItemCount; // ivar: _totalItemCount
@property (nonatomic, getter=isWirelessSync) BOOL wirelessSync; // ivar: _wirelessSync


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLibraryID:(id)arg0 dataClass:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif