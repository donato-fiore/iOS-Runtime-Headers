// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BAGRESOURCEOPTIONS_H
#define BAGRESOURCEOPTIONS_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BAGResourceOptions : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *additionalOptions; // ivar: _additionalOptions
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleID:(id)arg0 name:(id)arg1 type:(NSUInteger)arg2 additionalOptions:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 additionalOptions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif