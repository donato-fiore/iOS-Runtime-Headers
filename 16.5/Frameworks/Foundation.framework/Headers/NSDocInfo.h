// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSDOCINFO_H
#define NSDOCINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSDocInfo : NSObject <NSCopying>

 {
    NSInteger time;
    unsigned short mode;
    ? flags;
}




-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromInfo:(struct stat *)arg0 ;
-(id)initWithFileAttributes:(id)arg0 ;
-(void)setFileAttributes:(id)arg0 ;


@end


#endif