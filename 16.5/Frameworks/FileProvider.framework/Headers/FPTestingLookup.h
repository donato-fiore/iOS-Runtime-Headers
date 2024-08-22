// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPTESTINGLOOKUP_H
#define FPTESTINGLOOKUP_H

@class NSString;
@protocol NSFileProviderTestingLookup;


#import "FPTestingOperation.h"

@interface FPTestingLookup : FPTestingOperation <NSFileProviderTestingLookup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSUInteger side;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)asLookup;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationIdentifier:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif