// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPTESTINGINGESTION_H
#define FPTESTINGINGESTION_H

@class NSString;
@protocol NSFileProviderTestingIngestion, NSFileProviderItem;


#import "FPTestingOperation.h"

@interface FPTestingIngestion : FPTestingOperation <NSFileProviderTestingIngestion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSFileProviderItem> *item; // ivar: _item
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSUInteger side;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)asIngestion;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationIdentifier:(id)arg0 itemIdentifier:(id)arg1 item:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif