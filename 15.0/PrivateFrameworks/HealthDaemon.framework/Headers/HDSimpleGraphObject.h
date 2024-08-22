// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSIMPLEGRAPHOBJECT_H
#define HDSIMPLEGRAPHOBJECT_H


#import <Foundation/Foundation.h>


@interface HDSimpleGraphObject : NSObject

@property (readonly, nonatomic) NSInteger rowID; // ivar: _rowID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 ;


@end


#endif