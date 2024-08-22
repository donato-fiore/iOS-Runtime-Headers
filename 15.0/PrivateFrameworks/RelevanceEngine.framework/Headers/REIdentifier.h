// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REIDENTIFIER_H
#define REIDENTIFIER_H

@class NSString;
@protocol NSCopying;



@interface REIdentifier : NSString <NSCopying>

 {
    NSUInteger _hash;
    NSUInteger _length;
}


@property (readonly, nonatomic) NSString *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *section; // ivar: _section


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDataSource:(id)arg0 section:(id)arg1 identifier:(id)arg2 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;


@end


#endif