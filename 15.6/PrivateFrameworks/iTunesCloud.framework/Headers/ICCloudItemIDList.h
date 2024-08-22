// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLOUDITEMIDLIST_H
#define ICCLOUDITEMIDLIST_H

@class NSMutableArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ICCloudItemIDList : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}


@property (readonly, nonatomic) NSUInteger count;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addCloudItemID:(NSUInteger)arg0 idType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateCloudItemIDsUsingBlock:(id)arg0 ;
-(void)insertCloudItemID:(NSUInteger)arg0 idType:(NSInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif