// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSEARCHCONTEXT_H
#define CSSEARCHCONTEXT_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSSearchContext : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (readonly) NSString *markedText; // ivar: _markedText
@property (readonly) NSUInteger markedTextStart; // ivar: _markedTextStart
@property (readonly) NSUInteger maxItemsCount; // ivar: _maxItemsCount
@property (readonly) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (readonly) NSUInteger queryID; // ivar: _queryID
@property (readonly) NSString *userQuery; // ivar: _userQuery
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueryID:(NSUInteger)arg0 userQuery:(id)arg1 maxItemsCount:(NSUInteger)arg2 keyboardLanguage:(id)arg3 preferredLanguages:(id)arg4 ;
-(id)initWithQueryID:(NSUInteger)arg0 userQuery:(id)arg1 maxItemsCount:(NSUInteger)arg2 keyboardLanguage:(id)arg3 preferredLanguages:(id)arg4 markedText:(id)arg5 markedTextStart:(NSUInteger)arg6 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif