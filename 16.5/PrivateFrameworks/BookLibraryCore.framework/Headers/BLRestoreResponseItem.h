// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLRESTORERESPONSEITEM_H
#define BLRESTORERESPONSEITEM_H

@class NSString, NSError, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLRestoreResponseItem : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *downloadID; // ivar: _downloadID
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSNumber *storeItemID; // ivar: _storeItemID
@property (readonly, nonatomic) BOOL success;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreItemID:(id)arg0 downloadID:(id)arg1 error:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif