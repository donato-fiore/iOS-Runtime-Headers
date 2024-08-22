// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLWEBITEM_H
#define CLWEBITEM_H

@class NSURL, NSDate, UIImage, NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface CLWebItem : NSObject <NSCopying, NSCoding>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (retain, nonatomic) NSDate *deletedAt; // ivar: _deletedAt
@property (retain, nonatomic) NSURL *href; // ivar: _href
@property (copy, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isPrivate) BOOL private; // ivar: _private
@property (retain, nonatomic) NSURL *remoteURL; // ivar: _remoteURL
@property (nonatomic, getter=isTrashed) BOOL trashed; // ivar: _trashed
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSDate *updatedAt; // ivar: _updatedAt
@property (nonatomic) NSInteger viewCount; // ivar: _viewCount


+(id)webItem;
+(id)webItemWithName:(id)arg0 ;
+(id)webItemWithName:(id)arg0 type:(NSInteger)arg1 viewCount:(NSInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 viewCount:(NSInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif