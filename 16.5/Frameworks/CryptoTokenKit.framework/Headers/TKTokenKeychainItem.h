// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENKEYCHAINITEM_H
#define TKTOKENKEYCHAINITEM_H

@class NSData, NSDictionary, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "TKTokenID.h"

@interface TKTokenKeychainItem : NSObject {
    NSData *_accessControl;
}


@property (retain) NSData *accessControl;
@property (copy) NSDictionary *constraints; // ivar: _constraints
@property (readonly, copy) NSData *encodedObjectID;
@property (readonly, copy) NSMutableDictionary *keychainAttributes;
@property (copy) NSString *label; // ivar: _label
@property (readonly, copy) id *objectID; // ivar: _objectID
@property (retain) TKTokenID *tokenID; // ivar: _tokenID


+(id)accessControlForConstraints:(id)arg0 tokenID:(id)arg1 error:(*id)arg2 ;
+(id)keychainItemWithInfo:(id)arg0 ;
+(id)operationMap;
-(id)description;
-(id)initWithItemInfo:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 ;


@end


#endif