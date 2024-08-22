// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDCREATEPLACEHOLDERSREQUESTOPTIONS_H
#define ASDCREATEPLACEHOLDERSREQUESTOPTIONS_H

@class NSArray;


#import "ASDRequestOptions.h"

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise; // ivar: _completeDataPromise
@property (nonatomic) BOOL createAsMobileBackup; // ivar: _createAsMobileBackup
@property (readonly, nonatomic) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithApplicationMetadata:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif