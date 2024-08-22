// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCLIENTCODESIGNINDEX_H
#define MCMCLIENTCODESIGNINDEX_H

@class NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCMClientCodeSignIndex : NSObject <NSCopying>

 {
    NSData *_cdhash;
    NSString *_identifier;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClientCodeSignIndex:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCDHash:(id)arg0 identifier:(id)arg1 ;


@end


#endif