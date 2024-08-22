// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBBOOKMARKLABEL_H
#define WBBOOKMARKLABEL_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBBookmarkLabel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 pinned:(BOOL)arg2 ;
-(id)labelWithAddress:(id)arg0 ;
-(id)labelWithPinned:(BOOL)arg0 ;
-(id)labelWithTitle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif