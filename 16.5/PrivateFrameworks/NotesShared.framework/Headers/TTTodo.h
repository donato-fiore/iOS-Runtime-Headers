// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTTODO_H
#define TTTODO_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TTTodo : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL done; // ivar: _done
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 done:(BOOL)arg1 ;
-(id)serialize;
-(id)todoWithDone:(BOOL)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif