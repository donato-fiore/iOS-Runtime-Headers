// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OUOBJECTASSET_H
#define OUOBJECTASSET_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding, OUPointCloud;

#import <Foundation/Foundation.h>


@interface OUObjectAsset : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSObject<OUPointCloud> *frustumPointCloud; // ivar: _frustumPointCloud
@property (retain, nonatomic) NSDictionary *groups; // ivar: _groups
@property (retain, nonatomic) NSArray *objects; // ivar: _objects


+(BOOL)supportsSecureCoding;
-(id)GetAllObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif