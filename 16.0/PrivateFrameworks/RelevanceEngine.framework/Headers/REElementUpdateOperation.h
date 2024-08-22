// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REELEMENTUPDATEOPERATION_H
#define REELEMENTUPDATEOPERATION_H


#import <Foundation/Foundation.h>

#import "REElement.h"
#import "RESectionPath.h"

@interface REElementUpdateOperation : NSObject

@property (readonly, nonatomic) REElement *element; // ivar: _element
@property (readonly, nonatomic) RESectionPath *movedToPath; // ivar: _movedToPath
@property (readonly, nonatomic) RESectionPath *path; // ivar: _path
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)insertElement:(id)arg0 atPath:(id)arg1 ;
+(id)moveElement:(id)arg0 fromPath:(id)arg1 toPath:(id)arg2 ;
+(id)refreshElement:(id)arg0 atPath:(id)arg1 ;
+(id)reloadElement:(id)arg0 atPath:(id)arg1 ;
+(id)removeElement:(id)arg0 atPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithElement:(id)arg0 path:(id)arg1 newPath:(id)arg2 updateType:(NSUInteger)arg3 ;


@end


#endif