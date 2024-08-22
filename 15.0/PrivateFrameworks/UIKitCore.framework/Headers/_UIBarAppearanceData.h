// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBARAPPEARANCEDATA_H
#define _UIBARAPPEARANCEDATA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIBarAppearanceData : NSObject <NSCopying>

 {
    BOOL _immutable;
}




+(id)decodeFromCoder:(id)arg0 prefix:(id)arg1 ;
-(BOOL)checkEqualTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)hashInto:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)replicate;
-(id)writableInstance;
-(void)assertMutable:(SEL)arg0 ;
-(void)describeInto:(id)arg0 ;
-(void)encodeToCoder:(id)arg0 prefix:(id)arg1 ;
-(void)markReadOnly;


@end


#endif