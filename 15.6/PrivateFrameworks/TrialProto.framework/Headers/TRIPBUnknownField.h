// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBUNKNOWNFIELD_H
#define TRIPBUNKNOWNFIELD_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIPBUInt32Array.h"
#import "TRIPBUInt64Array.h"

@interface TRIPBUnknownField : NSObject <NSCopying>



@property (readonly, nonatomic) TRIPBUInt32Array *fixed32List; // ivar: mutableFixed32List_
@property (readonly, nonatomic) TRIPBUInt64Array *fixed64List; // ivar: mutableFixed64List_
@property (readonly, nonatomic) NSArray *groupList; // ivar: mutableGroupList_
@property (readonly, nonatomic) NSArray *lengthDelimitedList; // ivar: mutableLengthDelimitedList_
@property (readonly, nonatomic) int number; // ivar: number_
@property (readonly, nonatomic) TRIPBUInt64Array *varintList; // ivar: mutableVarintList_


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)serializedSize;
-(NSUInteger)serializedSizeAsMessageSetExtension;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithNumber:(int)arg0 ;
-(void)addFixed32:(unsigned int)arg0 ;
-(void)addFixed64:(NSUInteger)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)addLengthDelimited:(id)arg0 ;
-(void)addVarint:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)mergeFromField:(id)arg0 ;
-(void)writeAsMessageSetExtensionToOutput:(id)arg0 ;
-(void)writeToOutput:(id)arg0 ;


@end


#endif