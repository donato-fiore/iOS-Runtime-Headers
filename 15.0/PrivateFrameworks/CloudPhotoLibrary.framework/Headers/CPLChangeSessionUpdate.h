// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLCHANGESESSIONUPDATE_H
#define CPLCHANGESESSIONUPDATE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *libraryVersion; // ivar: _libraryVersion
@property (readonly, nonatomic) NSDate *queuedDate; // ivar: _queuedDate
@property (readonly, nonatomic) NSString *statusDescription;


+(BOOL)supportsSecureCoding;
-(BOOL)applyToStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardFromStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg0 ;
-(id)storageForStatusInStore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif