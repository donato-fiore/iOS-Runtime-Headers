// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSBUNDLEIDENTIFIERANDTYPE_H
#define _LSBUNDLEIDENTIFIERANDTYPE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _LSBundleIdentifierAndType : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)createRepresentingProxy:(id)arg0 ;
+(id)createRepresentingRecord:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleID:(id)arg0 type:(id)arg1 ;


@end


#endif