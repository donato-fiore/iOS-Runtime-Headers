// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFBOOK_H
#define DMFBOOK_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFBook : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *author; // ivar: _author
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreID; // ivar: _iTunesStoreID
@property (readonly, copy, nonatomic) NSString *persistentID; // ivar: _persistentID
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentID:(id)arg0 iTunesStoreID:(id)arg1 author:(id)arg2 title:(id)arg3 version:(id)arg4 type:(NSUInteger)arg5 state:(NSUInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif