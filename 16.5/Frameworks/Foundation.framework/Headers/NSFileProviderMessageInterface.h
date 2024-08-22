// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDERMESSAGEINTERFACE_H
#define NSFILEPROVIDERMESSAGEINTERFACE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileProviderMessageInterface : NSObject <NSSecureCoding>



@property (copy) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (copy) NSString *itemIdentifier;
@property (readonly, copy) NSString *name; // ivar: _name
@property (copy) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (copy) NSString *providerIdentifier;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 itemIdentifier:(id)arg1 providerIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif