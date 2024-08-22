// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSIMPLEGRAPHOBJECT_H
#define HDSIMPLEGRAPHOBJECT_H


#import <Foundation/Foundation.h>


@interface HDSimpleGraphObject : NSObject

@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) NSInteger rowID; // ivar: _rowID
@property (readonly, nonatomic) NSUInteger slots; // ivar: _slots
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 version:(NSInteger)arg1 slots:(NSUInteger)arg2 deleted:(BOOL)arg3 ;


@end


#endif