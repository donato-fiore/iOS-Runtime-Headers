// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSITEMPAIR_H
#define LIVEFSITEMPAIR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LiveFSItemPair : NSObject <NSCopying>



@property (readonly) NSString *filename; // ivar: _filename
@property (readonly) NSString *itemId; // ivar: _itemId


+(id)newWithParent:(id)arg0 fname:(id)arg1 ;
+(id)newWithParent:(id)arg0 fname:(id)arg1 caseSensitivity:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithParent:(id)arg0 fname:(id)arg1 caseSensitivity:(BOOL)arg2 ;


@end


#endif