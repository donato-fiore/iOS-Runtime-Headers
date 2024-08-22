// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDBUILDMAPKEY_H
#define PDBUILDMAPKEY_H

@class NSValue, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PDBuildMapKey : NSObject <NSCopying>

 {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)drawable;
-(id)groupId;
-(id)init;
-(id)initWithDrawable:(id)arg0 groupId:(id)arg1 ;
-(void)setDrawable:(id)arg0 ;
-(void)setGroupId:(id)arg0 ;


@end


#endif