// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKCUSTOMFORMATLISTSTEMMATCHOBJECT_H
#define TSKCUSTOMFORMATLISTSTEMMATCHOBJECT_H

@class TSUCustomFormat;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying>



@property (readonly, nonatomic) TSUCustomFormat *customFormat; // ivar: _customFormat


+(id)stemMatchObjectWithCustomFormat:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initObjectWithCustomFormat:(id)arg0 ;


@end


#endif