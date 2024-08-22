// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTUSERFACINGUNIVERSALRECENT_H
#define CKCONTEXTUSERFACINGUNIVERSALRECENT_H

@class BMUserActivityMetadataEvent;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKContextUserFacingUniversalRecent : NSObject <NSCopying>



@property (retain, nonatomic) BMUserActivityMetadataEvent *event; // ivar: _event


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif