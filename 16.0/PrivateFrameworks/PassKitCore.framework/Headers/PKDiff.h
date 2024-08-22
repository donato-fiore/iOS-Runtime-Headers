// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDIFF_H
#define PKDIFF_H

@class NSMutableArray, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKDiff : NSObject <NSSecureCoding>

 {
    NSMutableArray *_hunks;
}


@property (copy, nonatomic) NSData *passManifestHash; // ivar: _passManifestHash
@property (copy, nonatomic) NSString *passUniqueID; // ivar: _passUniqueID


+(BOOL)supportsSecureCoding;
-(BOOL)getHunkForKey:(id)arg0 oldValue:(*id)arg1 newValue:(*id)arg2 message:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDiff:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)hunkCount;
-(NSUInteger)_hunkIndexForKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)anyKey;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addHunkWithKey:(id)arg0 oldValue:(id)arg1 newValue:(id)arg2 message:(id)arg3 ;
-(void)addHunksFromDiff:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateHunks:(id)arg0 ;
-(void)key:(*id)arg0 oldValue:(*id)arg1 newValue:(*id)arg2 message:(*id)arg3 forHunkAtIndex:(NSInteger)arg4 ;
-(void)removeHunkForKey:(id)arg0 ;


@end


#endif