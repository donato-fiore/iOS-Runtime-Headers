// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTEXTUALEVENTBOOKMARK_H
#define TPSCONTEXTUALEVENTBOOKMARK_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TPSContextualEventBookmark : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) unsigned int dataVersion; // ivar: _dataVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataVersion:(unsigned int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif