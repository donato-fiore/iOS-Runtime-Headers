// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRIVACYREPORTITEM_H
#define SFPRIVACYREPORTITEM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SFPrivacyReportItem : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 userInfo:(id)arg1 ;


@end


#endif