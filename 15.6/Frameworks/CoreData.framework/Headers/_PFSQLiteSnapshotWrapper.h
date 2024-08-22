// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFSQLITESNAPSHOTWRAPPER_H
#define _PFSQLITESNAPSHOTWRAPPER_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying, NSMutableCopying>

 {
    *sqlite3_snapshot _s;
    int _externalReferences;
    int _flags;
}


@property (readonly, nonatomic) *void bytes;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif