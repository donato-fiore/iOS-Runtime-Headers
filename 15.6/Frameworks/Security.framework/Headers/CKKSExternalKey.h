// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKKSEXTERNALKEY_H
#define CKKSEXTERNALKEY_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKKSExternalKey : NSObject <NSSecureCoding>



@property (readonly) NSData *keyData; // ivar: _keyData
@property (readonly) NSString *parentKeyUUID; // ivar: _parentKeyUUID
@property (readonly) NSString *uuid; // ivar: _uuid
@property (readonly) NSString *view; // ivar: _view


+(BOOL)supportsSecureCoding;
+(id)parseFromJSONDict:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithView:(id)arg0 uuid:(id)arg1 parentTLKUUID:(id)arg2 keyData:(id)arg3 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif