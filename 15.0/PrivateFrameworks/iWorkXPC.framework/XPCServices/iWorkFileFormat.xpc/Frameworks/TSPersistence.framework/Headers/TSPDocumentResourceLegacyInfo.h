// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDOCUMENTRESOURCELEGACYINFO_H
#define TSPDOCUMENTRESOURCELEGACYINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying>

 {
    NSString *_digestString;
    NSString *_locator;
}


@property (readonly, copy) NSString *digestString;
@property (readonly, copy) NSString *locator;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDocumentResourceLegacyInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDigestString:(id)arg0 locator:(id)arg1 ;


@end


#endif