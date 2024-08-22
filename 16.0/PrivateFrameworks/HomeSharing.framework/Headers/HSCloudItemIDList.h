// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSCLOUDITEMIDLIST_H
#define HSCLOUDITEMIDLIST_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HSCloudItemIDList : NSObject <NSSecureCoding>

 {
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}


@property (readonly, nonatomic) NSUInteger count;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addCloudItemID:(NSUInteger)arg0 idType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateCloudItemIDsUsingBlock:(id)arg0 ;
-(void)insertCloudItemID:(NSUInteger)arg0 idType:(NSInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif