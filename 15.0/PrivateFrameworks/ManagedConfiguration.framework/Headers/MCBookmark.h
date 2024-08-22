// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCBOOKMARK_H
#define MCBOOKMARK_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCBookmark : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSerializableDictionary:(id)arg0 ;
-(id)serializableDictionary;


@end


#endif