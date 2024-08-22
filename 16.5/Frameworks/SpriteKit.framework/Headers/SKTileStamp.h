// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKTILESTAMP_H
#define SKTILESTAMP_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKTileStamp : NSObject <NSSecureCoding>

 {
    unsigned int _columns;
    unsigned int _rows;
    *unsigned int _tileData;
}


@property (readonly, nonatomic) NSUInteger numberOfColumns;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (readonly, nonatomic) *unsigned int tileData;


+(BOOL)supportsSecureCoding;
+(id)tileStampWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 tileData:(*unsigned int)arg2 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 tileData:(*unsigned int)arg2 ;
-(id)tileDefinitionsForTileMap:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif