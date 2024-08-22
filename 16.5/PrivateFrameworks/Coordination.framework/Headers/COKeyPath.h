// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COKEYPATH_H
#define COKEYPATH_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface COKeyPath : NSObject <NSCopying>



@property (copy, nonatomic) NSString *absoluteString; // ivar: _absoluteString
@property (copy, nonatomic) NSArray *components; // ivar: _components


+(id)allowedCharacterSet;
+(id)createWithString:(id)arg0 ;
+(id)predicateWithComponents:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithComponents:(id)arg0 ;


@end


#endif