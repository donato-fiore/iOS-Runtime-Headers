// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDRESTOREAPPLICATIONSREQUESTOPTIONS_H
#define ASDRESTOREAPPLICATIONSREQUESTOPTIONS_H

@class NSArray;


#import "ASDRequestOptions.h"

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise; // ivar: _completeDataPromise
@property (nonatomic) BOOL createAsMobileBackup; // ivar: _createAsMobileBackup
@property (nonatomic) BOOL createsPlaceholders; // ivar: _createsPlaceholders
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) BOOL restoreApplicationData; // ivar: _restoreApplicationData


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithApplicationMetadata:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif